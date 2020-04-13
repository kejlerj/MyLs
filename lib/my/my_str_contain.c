/*
** EPITECH PROJECT, 2017
** my_str_contain.c
** File description:
** Analyse if the string str contain the character c
*/

#include "my.h"

int	my_str_contain(char const *str, char c)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == c)
			return (i);
	return (0);
}
