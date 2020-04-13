/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** return a copy of the given string
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char const *src)
{
	int len = my_strlen((char *)src);
	char *str;

	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (my_strcpy(str, src));
}
