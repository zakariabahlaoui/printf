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

	len = 0;

	if (c == 'c')
		len += print_char(va_arg(arg, int));
	if (c == 's')
		len += print_string(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		len += print_int(va_arg(arg, int));
	if (c == 'u')
		len += print_unsi(va_arg(arg, unsigned int));

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
			if (format[i] == '%')
				len += print_char('%');
			len += print_arg(format[i + 1], arg);
			i++;
		}
		else
			len += print_char(format[i]);
		i++;
	}

	va_end(arg);
	return (len);
}
