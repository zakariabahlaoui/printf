#include "main.h"

/**
 * print_int - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 *
 * Return: return lenght
 */

static void ft_putnbr_fd_recursive(unsigned int n)
{
	if (n > 9)
		print_int(n / 10);
	_putchar((n % 10) + '0');
}

void ft_putnbr2(int n)
{
	if (n >= 0)
		return ft_putnbr_fd_recursive(n);

	_putchar('-');
	ft_putnbr_fd_recursive(n * -1);
}
int print_int(int n)
{
	int nb;
	unsigned int i;

	nb = n;
	i = 1;
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr2(n);
	if (n == -2147483648)
		return (11);
	return (i);
}