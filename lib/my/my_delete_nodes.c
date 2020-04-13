/*
** EPITECH PROJECT, 2017
** my_delete_nodes.c
** File description:
** if it match, applie the fonction
*/

#include "mylist.h"
#include <stdlib.h>

void	delete_node(linked_list_t *node)
{
	node->data = NULL;
	node->next = NULL;
	free(node);
}

int	my_delete_nodes(linked_list_t **begin, void const *data_ref,
		int (*cmp)())
{
	linked_list_t *tmp1 = *begin;
	linked_list_t *tmp2 = tmp1->next;

	while (tmp2 != NULL) {
		if (cmp(tmp2->data, data_ref) == 0) {
			tmp2 = tmp2->next;
			delete_node(tmp1->next);
			tmp1->next = tmp2;
		}
		else {
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
	tmp1 = *begin;
	if (cmp(tmp1->data, data_ref) == 0){
		*begin = (*begin)->next;
		delete_node(tmp1);
	}
	return (0);
}
