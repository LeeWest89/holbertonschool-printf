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
int print_next(va_list arg);

int (*sign(const char *format))(va_list)
{
	int a;

	print_a fs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"%", NULL},
		{NULL, NULL}
	};

	for (a = 0; fs[a].symbol != NULL; a++)
	{
		if (*(fs[a].symbol) == *format)
				return(fs[a].print);
	}

	return (print_next);
}

int print_next(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	_putchar(37);
	_putchar(a);
	return (2);
	
}

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

int print_int(va_list arg)
{
	int num = va_arg(arg, int);
	int a = 0, b = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / b > 9)
		b *= 10;

	while (b != 0)
	{
		_putchar('0' + (num / b));
		num %= b;
		b /= 10;
		a++;
	}
	return (a);
}

int print_string(va_list arg)
{
	char *s;
	int a = 0;

	s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	return (a);
}

int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
