/*
** EPITECH PROJECT, 2017
** my_show_list.c
** File description:
** display the list
*/

#include "my.h"
#include <stdlib.h>

void	my_show_list(linked_list_t *list)
{
	while (list != NULL) {
		my_putstr(list->data);
		my_putchar('\n');
		list = list->next;
	}
}
