#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * process_format - process the format
 * @args: argument to be passed
 * @format: pointer to the pointer of the format string.
 *
 * Return: number of character that were processed
 */

int process_format(va_list args, const char **format)
{
	int g = 0;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"u", print_unsigned_int},
		{NULL, NULL}
	};

	g = n_con(args, *format, fs);
	if (g == 0)
	{
		_putchar('%');
		_putchar(**format);
		g = 2;
	}

	(*format)++;
	return (g);
}
