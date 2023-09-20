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
	int i, j;

	j = 0;
	while (s[j])
		j++;

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

	return (i);
}
