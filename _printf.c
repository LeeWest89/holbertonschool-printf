#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - works like printf in a limited way
 * @format: an argument that is to be printed
 * @...: Number of arguments to print
 *
 * Return: returns 0 on success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int g = 0;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent}
	};

	va_start(args, format);

	while (*format)
	{
		printf("Processing character: %c (ASCII: %d)\n", *format, (int)*format);
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				g++;
			}
			else
				g += n_con(args, format, fs);
		}

		else if (*format == '\n')
		{
			 _putchar('\n');
			 g++;
		}
		else
		{
			_putchar(*format);
			g++;
		}

		format++;
	}
	va_end(args);
	return (g);
}
