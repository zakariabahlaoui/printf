#include "main.h"

/**
 * print_arg - print the arg that take from main function
 * @c: the character
 * @arg: thr arg
 *
 * Return: return the length
 *
 */

int print_arg(char c, va_list arg)
{
	int len;

	len = -1;

	if (c == 'c')
		len = print_char(va_arg(arg, int));
	else if (c == 's')
		len = print_string(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		len = print_int(va_arg(arg, int));
	else if (c == 'u')
		len = print_unsi(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		len = print_hex(va_arg(arg, unsigned int), c);
	else if (c == 'o')
		len = print_octal(va_arg(arg, unsigned int));
	else if (c == 'b')
		len = print_binary(va_arg(arg, unsigned int));
	else if (c == 'p')
		len = print_p(va_arg(arg, long));
	else if (c == 'r')
		len = print_r(va_arg(arg, char *));
	else if (c = 'S')
		len = print_just_printbale(va_arg(arg, char *));
	else if (c != ' ')
	{
		len = print_char('%');
		len += print_char(c);
	}

	return (len);
}

/**
 * _printf - produces output according to a format
 * @format: the string
 *
 * Return: return lenght the _pritf print
 *
 */

int _printf(const char *format, ...)
{
	int i;
	int len;
	va_list arg;

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	len = 0;
	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len += print_char('%');
				i++;
			}
			else if (format[i] != '\0')
			{
				len += print_arg(format[i], arg);
				i++;
			}
		}
		else
		{
			len += print_char(format[i]);
			i++;
		}
	}

	va_end(arg);
	return (len);
}
