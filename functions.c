#include "main.h"
#include <stdarg.h>


/**
 * print_next - prints the next character
 * @arg: the arguement
 * Return: 2 on success
 */

int print_next(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
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
	int count = 0, divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count += 1;
	}

	if (num == INT_MIN)
	{
		num %= 2000000000;
		_putchar('2');
		num = -num;
		count += 1;
	}

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar('0' + (num / divisor));
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
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
