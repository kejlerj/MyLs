/*
** EPITECH PROJECT, 2017
** my_list_size.c
** File description:
**
*/

#include "mylist.h"
#include <stdlib.h>

int	my_list_size(linked_list_t const *begin)
{
	int i = 0;
	linked_list_t *tmp = (linked_list_t *)begin;

	while (tmp != NULL){
		i++;
		tmp = tmp -> next;
	}
	return (i);
}
