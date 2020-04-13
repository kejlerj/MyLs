/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** convert decimal to another base
*/

#include "my.h"

int	convert_base(long long nbr, char const *base, int len)
{
	if ((nbr / len) != 0)
		convert_base(nbr / len, base, len);
	my_putchar(base[nbr % len]);
	return (0);
}

int	my_putnbr_base(long long nbr, char const *base)
{
	unsigned int len = my_strlen(base);

	if (nbr < 0) {
		nbr *= - 1;
		my_putchar('-');
	}
	convert_base(nbr, base, len);
	return (0);
}
