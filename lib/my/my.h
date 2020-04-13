/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header that contain the prototypes exposed in libmy.a
*/

#ifndef MY_H_
	#define MY_H_

#include "mylist.h"

	int my_compute_factorial_rec(int);
	int my_compute_power_rec(int, int);
	int my_compute_square_root(int);
	int my_find_prime_sup(int);
	int my_getnbr_base(char const *, char const *);
	int my_getnbr(char const *);
	int my_isneg(int);
	int my_chr_isdigit(char);
	int my_is_prime(int, int);
	void my_putchar(char);
	int my_putnbr_base(long long, char const *);
	int my_put_nbr(int);
	int my_put_unbr(unsigned int);
	void my_putstr(char const *);
	char *my_revstr(char *);
	int my_showmem(char const *, int);
	int my_showstr(char const *);
	void my_sort_int_array(int *, int);
	char *my_strcapitalize(char *);
	char *my_strcat(char *, char const *);
	int my_strcmp(char const *, char const *);
	char *my_strcpy(char *, char const *);
	int my_str_isalpha(char const *);
	int my_str_islower(char const *);
	int my_str_isnum(char const *);
	int my_str_isprintable(char const *);
	int my_str_isupper(char const *);
	void my_print_all(char *);
	int my_strlen(char const *);
	char *my_strlowcase(char *);
	char *my_strncat(char *, char const *, int);
	int my_strncmp(char const *, char const *, int);
	char *my_strncpy(char *, char const *, int);
	char *my_strstr(char const *, char const *);
	char *my_strdup(char const *);
	char **my_str_to_word_array(char const *);
	int my_show_word_array(char * const *);
	char *my_strupcase(char *);
	void my_swap(int *, int *);
	int my_str_contain(char const *str, char c);
	linked_list_t	*my_put_in_list(linked_list_t **list, char *value);
	linked_list_t	*my_params_to_list(int ac, char const * const *av);
	linked_list_t	*my_sort_list(linked_list_t **begin1, int (*cmp)());
	void	my_show_list(linked_list_t *list);
	int	my_list_size(linked_list_t const *begin);
	void	my_rev_list(linked_list_t **begin);
	linked_list_t	*my_find_node(linked_list_t *begin,
			void const *data_ref, int (*cmp)());
	void	delete_node(linked_list_t *node);
	void	my_free_list(linked_list_t *begin);
	int	my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));
	int	my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
		void const *data_ref, int (*cmp)());
	void	my_concat_list(linked_list_t **begin1,
			linked_list_t *begin2);
	void	my_show_list(linked_list_t *begin);
	void	*my_realloc(char *ptr, int size);

#endif
