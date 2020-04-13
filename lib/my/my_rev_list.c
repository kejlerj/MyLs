/*
** EPITECH PROJECT, 2017
** my_rev_list.c
** File description:
** reverse a linked list
*/

#include "mylist.h"
#include <stdlib.h>

void	my_rev_list(linked_list_t **begin)
{
	linked_list_t *cpt1 = *begin;
	linked_list_t *cpt2 = *begin;
	linked_list_t *tmp = *begin;

	if (!(*begin) || (!(*begin)->next))
		return;
	tmp = cpt1 -> next;
	cpt2 = tmp -> next;
	cpt1 -> next = NULL;

	while (cpt2 != NULL) {
		tmp -> next = cpt1;
		cpt1 = tmp;
		tmp = cpt2;
		cpt2 = cpt2 -> next;
	}
	tmp -> next = cpt1;
	*begin = tmp;
}
