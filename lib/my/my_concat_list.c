/*
** EPITECH PROJECT, 2017
** my_concat_list.c
** File description:
** concatenate 2 linked lists
*/

#include "mylist.h"
#include <stdlib.h>

void	my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
	linked_list_t *tmp = *begin1;

	while (tmp -> next != NULL)
		tmp = tmp -> next;
	tmp -> next = begin2;
}
