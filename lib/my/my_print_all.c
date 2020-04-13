/*
** EPITECH PROJECT, 2017
** my_print_all.c
** File description:
** print all even non printable characters
*/

#include "my.h"

void	print_non_printable_char(char c)
{
	my_putchar('\\');
	if (c < 10)
		my_putstr("00");
	else if (c < 100)
		my_putchar('0');
	my_putnbr_base(c, "01234567");
}

void	my_print_all(char *str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] < 32 || str[i] >= 127)
			print_non_printable_char(str[i]);
		else
			my_putchar(str[i]);
	}
}
