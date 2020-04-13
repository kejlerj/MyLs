/*
** EPITECH PROJECT, 2017
** flags2_ls.c
** File description:
**
*/

#include "include/my_ls.h"

void	print_right(mode_t m)
{
	my_putstr((S_ISDIR(m)) ? "d" : "-");
	my_putstr((S_IRUSR & m) ? "r" : "-");
	my_putstr((S_IWUSR & m) ? "w" : "-");
	my_putstr((S_IXUSR & m) ? "x" : "-");
	my_putstr((S_IRGRP & m) ? "r" : "-");
	my_putstr((S_IWGRP & m) ? "w" : "-");
	my_putstr((S_IXGRP & m) ? "x" : "-");
	my_putstr((S_IROTH & m) ? "r" : "-");
	my_putstr((S_IWOTH & m) ? "w" : "-");
	my_putstr((S_IXOTH & m) ? "x" : "-");
	my_putchar('.');
}

void	print_time(time_t time)
{
	char *str = ctime(&time);

	my_putchar('\t');
	for (int i = 4; i < 7; i++)
		my_putchar(str[i]);
	my_putchar(' ');
	my_putchar(str[8]);
	if (str[9] != ' ')
		my_putchar(str[9]);
	my_putchar(' ');

	for (int i = 11; i < 16; i++)
		my_putchar(str[i]);
}

char	*get_relative_name(char *path)
{
	unsigned int len = 0;
	char *name;
	int i = 0;

	if (!path)
		return (NULL);
	len = my_strlen(path);
	for (i = len; path[i] != '/' && i > 0; i--)
		;
	if (i == 0 || i == (len - 1))
		return (path);
	i++;
	return (&path[i]);
}

void	my_ls_l(char *str)
{
	struct stat s;
	char *relative_name = get_relative_name(str);

	if (stat(str, &s) == -1)
		print_error("Error stat", 84);
	print_right(s.st_mode);
	my_putchar(' ');
	my_put_nbr(s.st_nlink);
	my_putchar(' ');
	my_putstr(getpwuid(s.st_uid)->pw_name);
	my_putchar(' ');
	my_putstr(getgrgid(s.st_gid)->gr_name);
	my_putchar(' ');
	my_put_nbr(s.st_size);
	print_time(s.st_mtime);
	my_putchar(' ');
	my_putstr(relative_name);
	my_putchar('\n');
}
