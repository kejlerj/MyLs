/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** count the number of characters
*/

int	my_strlen(char const *str)
{
	int i = 0;

	if (!str)
		return (-1);
	while (str[i] != '\0')
		i++;
	return (i);
}
