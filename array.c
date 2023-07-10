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
		{"%", print_percent},
		{NULL, NULL}
	};

	for (a = 0; fs[a].symbol != NULL; a++)
	{
		if (*(fs[a].symbol) == *format)
				return (fs[a].print);
	}

	return (print_next);
}

/**
 * print_next - prints the next character
 * @arg: the arguement
 * Return: 2 on success 
 */

int print_next(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	_putchar(37);
	_putchar(a);
	return (2);
}

/**
 * print_char - print the character
 * @arg: the arguement
 * Return: 1 on success
 */

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * print_int - print the integer
 * @arg: the arguement
 * Return: character count
 */

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

/**
 * print_string - prints the string
 * @arg: the argument
 * Return: Character count
 */

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

/**
 * print_percent - print the % after %
 * @arg: the arguement
 * Return: 2 on success
 */

int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
