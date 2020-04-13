/*
** EPITECH PROJECT, 2017
** my_apply_on_matching_nodes.c
** File description:
** if it match, applie the fonction
*/

#include "mylist.h"
#include <stdlib.h>

int	my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
		void const *data_ref, int (*cmp)())
{
	linked_list_t *tmp = begin;

	while (tmp != NULL) {
		if (cmp(tmp -> data, data_ref) == 0)
			f(tmp -> data);
		tmp = tmp -> next;
	}
	return (0);
}
