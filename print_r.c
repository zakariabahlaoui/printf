#include "main.h"

/**
 * print_r - reverse a string
 * @s: the string
 *
 * Return: return lenght
 *
 */

int print_r(char *s)
{
	char tmp;
	int i, j, len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	j = 0;
	while (s[j])
		j++;
	len = j;

	i = 0;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}

	return (len);
}
