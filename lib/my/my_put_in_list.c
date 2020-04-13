/*
** EPITECH PROJECT, 2017
** my_params_to_list.c
** File description:
** put argument in a list
*/

#include "mylist.h"
#include <stdlib.h>

linked_list_t	*my_put_in_list(linked_list_t **list, char *value)
{
	linked_list_t *element;

	element = malloc(sizeof(*element));
	element -> data = value;
	element -> next = *list;
	return (element);
}
