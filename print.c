#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_num - prints an int digit by digit
 * @num: the number
 */

void print_num(int num)
{
	int d;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	/**
	 * how we get negative
	 */

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	/**
	 * here we use recursion to breakdown a number then % to find the remainder.
	 */

	if (num >= 10)
		print_num(num / 10);

	d = num % 10;
	_putchar('0' + d);
}

/**
 * print_char - prints a character
 * @arg: the argument to print
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
}

/**
 * print_int - prints a int
 * @arg: the argument to print
 */

void print_int(va_list arg)
{
	unsigned int n = va_arg(arg, int);

	print_num(n);
}

/**
 * print_string - prints a string
 * @arg: the argument to print
 */

void print_string(va_list arg)
{
	char *s;
	int a;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(nil)";

	for (a = 0; s[a] != '\0'; a++)
		_putchar(s[a]);
}

/**
 * print_percent - prints a percent sign
 * @arg: the argument to print
 */

void print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
}
