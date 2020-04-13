/*
** EPITECH PROJECT, 2017
** my_find_node.c
** File description:
** if it match, applie the fonction
*/

#include "mylist.h"
#include <stdlib.h>

linked_list_t	*my_find_node(linked_list_t *begin, void const *data_ref,
		int (*cmp)())
{
	linked_list_t *tmp = begin;

	while (tmp != NULL) {
		if (cmp(tmp -> data, data_ref) == 0)
			return (tmp);
		tmp = tmp -> next;
	}
	return (0);
}
