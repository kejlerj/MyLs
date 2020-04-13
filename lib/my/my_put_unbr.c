/*
** EPITECH PROJECT, 2017
** my_put_unbr.c
** File description:
** Write a number
*/

#include "my.h"

int	my_put_unbr(unsigned int nb)
{
	if (nb < 10)
		my_putchar((nb % 10) + 48);
	else {
		my_put_nbr(nb / 10);
		my_putchar((nb % 10) + 48);
	}
	return (0);
}
