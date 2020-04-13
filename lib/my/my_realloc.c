/*
** EPITECH PROJECT, 2017
** get_next_line.c
** File description:
** read a line with a file descriptor
*/

#include <stdlib.h>
#include "my.h"

void	*my_realloc(char *ptr, int size)
{
	char *ptr2 = NULL;

	if (ptr == NULL) {
		if (!(ptr2 = malloc(sizeof(char) * (size + 1))))
			return (NULL);
		return (ptr2);
	}
	if (!(ptr2 = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ptr2 = my_strcpy(ptr2, ptr);
	return (ptr2);
}
