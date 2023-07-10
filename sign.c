#include "main.h"
#include <stddef.h>

/**
 * sign - prints an arguement
 * @format: string the arguement is printed from
 *
 * Return: NULL.
 */

int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_space(char c);

int (*sign(const char *format))(va_list)
{
	int a = 0, b = 0;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	while (a < 5)
	{
		if (format == *fs[a].print(arg));
		{
			if (a != 4)
			{
				b = b + fs[a].print(arg);
				a = 10;
			}

			else
			{
				_putchar(37);
				b++;
				a = 10;
			}
		}

		else
			a++;
	}

	if (a != 10)
	{
		_putchari(37);
		_putchar(format);
		b = b + 2;
	}

	return (b);
}
