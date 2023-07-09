#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - works like printf in a limited way
 * @format: an argument that is to be printed
 * @...: Number of arguments to print
 *
 * Return: returns characters that where counted
 */

int _printf(const char *format, ...)
{
	va_list args;

	int c = 0;

	va_start(args, format);

	while (*format)
	{
		/**
		 */
		if (*format == '%' && *(format + 1))
		{
			format++;
			c += process_format(args, &format);
		}
		/**
		 */
		else
		{
			_putchar(*format);
			c++;
		}

		format++;
	}

	va_end(args);
	return (c);
}
