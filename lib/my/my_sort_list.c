/*
** EPITECH PROJECT, 2017
** my_sort_list.c
** File description:
** sort a list
*/

#include "my.h"
#include "mylist.h"
#include <stdlib.h>

linked_list_t	*fusion(linked_list_t *begin1, linked_list_t *begin2,
		int (*cmp)())
{
	if (!(begin1))
		return (begin2);
	if (!(begin2))
		return (begin1);
	if (cmp(begin1->data, begin2->data) <= 0) {
		begin1->next = fusion(begin1->next, begin2, cmp);
		return (begin1);
	}
	else {
		begin2->next = fusion(begin2->next, begin1, cmp);
		return (begin2);
	}
}

linked_list_t	*my_sort_list(linked_list_t **begin1, int (*cmp)())
{
	linked_list_t *begin2 = *begin1;
	linked_list_t *tmp = NULL;
	unsigned int len = 0;

	if ((*begin1) == NULL)
		return (NULL);
	if ((*begin1)->next == NULL)
		return (*begin1);
	len = my_list_size(*begin1);
	tmp = *begin1;
	for (int i = 0; i < ((len / 2) - 1); i++)
		tmp = tmp->next;
	begin2 = tmp->next;
	tmp->next = NULL;
	return (fusion(my_sort_list(begin1, cmp), my_sort_list(&begin2, cmp), cmp));
}
