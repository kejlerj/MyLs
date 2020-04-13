/*
** EPITECH PROJECT, 2017
** my_free_list.c
** File description:
** free a list
*/

#include "mylist.h"
#include <stdlib.h>

void	my_free_list(linked_list_t *begin)
{
	linked_list_t *tmp = begin;

	while (begin != NULL) {
		begin = begin->next;
		free(tmp);
		tmp = begin;
	}
}
