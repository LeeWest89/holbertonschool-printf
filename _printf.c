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
		/**
		 * checks if there is a % and what the character after in is.
		 * passes the args, format, and fs to the n_con fuction and adds to g.
		 */
		if (*format == '%' && *(format + 1))
		{
			format++;
			g += n_con(args, format, fs);
		}
		/**
		 * if statement is false it continues the format string and adds to g
		 */
		else
		{
			_putchar(*format);
			g++;
		}

		format++;
	}

	_putchar('\n');
	va_end(args);
	return (g);
}
