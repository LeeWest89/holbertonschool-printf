#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - works like printf in a limited way
 * @format: an argument that is to be printed
 * @...: Number of arguments to print
 *
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int (*print)(va_list);
	int a = 0, b = 0, c = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && format[a])
	{
		if (format[a] != '%')
		{
			b = _putchar(format[a]);
			c = c + b;
			a++;
			continue;
		}
		if (format[a] == '%')
		{
			if (format[a + 1] != '\0')
			{
				print = sign(&format[a + 1]);
				if (print)
				{
					b = print(args);
					c = c + b;
					a = a + 2;
					continue;
				}

			}
			b = _putchar(format[a]);
			c = c + b;
			continue;
		}
		a++;
	}
	va_end(args);
	return (c);
}
