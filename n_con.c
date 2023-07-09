#include "main.h"
#include <stdarg.h>

/**
 * n_con - find the matching symbol in the fs array
 *		to the string its being passed and call
 *		the correct print function.
 * @args: argment list in _printf.c
 * @format: format sting that represents the wanted output format
 * @fs: array of the conversion specifers
 *
 * Return: c (the characters dealt with)
 */

int n_con(va_list args, const char *format, print_a fs[])
{
	int a, b = 0;

	for (a = 0; a < 7; a++)
	{
		if (*format == *(fs[a].symbol))
		{
			fs[a].print(args);
			b++;
			break;
		}
	}

	return (b);
}
