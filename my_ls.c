/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** reproduct the ls command
*/

#include "include/my_ls.h"


linked_list_t	*set_list(unsigned int flags, char *name)
{
	DIR *dir = open_dir(name);
	struct dirent *entry;
	linked_list_t *list = NULL;
	char *path = NULL;

	while ((entry = readdir(dir))) {
		path = get_path(entry->d_name, name);
		if ((entry->d_name)[0] != '.')
			list = my_put_in_list(&list, path);
	}
	closedir(dir);
	return (list);
}

int	get_total(linked_list_t *list)
{
	struct stat s;
	int total = 0;

	while (list != NULL) {
		stat(list->data, &s);
		total += (int)s.st_blocks;
		list = list->next;
	}
	return (total / 2);
}

void	show_ls(linked_list_t *list, unsigned int flags)
{
	if (flags & value_flag('l')) {
		my_putstr("total ");
		my_put_nbr(get_total(list));
		my_putchar('\n');
		while (list != NULL) {
			my_ls_l(list->data);
			list = list->next;
		}
	}
	else {
		while (list != NULL) {
			my_putstr(get_relative_name(list->data));
			my_putchar('\n');
			list = list->next;
		}
	}
}

void	my_ls(unsigned int flags, char *str)
{
	linked_list_t *list = NULL;
	struct stat s;

	stat(str, &s);
	if (flags & value_flag('d') || !(S_ISDIR(s.st_mode)))
		my_ls_d(flags, str);
	else {
		list = set_list(flags, str);
		if (flags & value_flag('t'))
			list = my_ls_t(list);
		else
			list = my_sort_list(&list, &cmp_alpha);
		if (flags & value_flag('r'))
			my_ls_r(&list);
		show_ls(list, flags);
		my_free_list(list);
	}
}

int	main(int argc, char **argv)
{
	unsigned int flags = 0;
	unsigned int nb_file = 0;

	for (int i = 1; i < argc; i++)
		flags = get_flags(flags, argv[i]);
	for (int i = 1; i < argc; i++) {
		if (argv[i][0] != '-') {
			my_ls(flags, argv[i]);
			nb_file++;
		}
	}
	if (nb_file == 0)
		my_ls(flags, ".");
	return (0);
}
