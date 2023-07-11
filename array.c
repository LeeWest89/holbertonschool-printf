#include "main.h"
#include <stddef.h>

/**
 * sign - prints an arguement
 * @format: string the arguement is printed from
 * Return: NULL.
 */

int (*sign(const char *format))(va_list)
{
	int a;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (a = 0; fs[a].symbol != NULL; a++)
	{
		if (*(fs[a].symbol) == *format)
			return (fs[a].print);
	}

	return (0);
}
