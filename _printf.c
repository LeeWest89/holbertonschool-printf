#include "main.h"

/**
 * _printf - works like printf in a limited way
 * @format: an argument that is to be printed
 * @...: Number of arguments to print
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	int (*print)(va_list);
	int a = 0, value = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[a])
	{
		if (format[a] != '%')
		{
			value = _putchar(format[a]);
			count = count + value;
			a++;
			continue;
		}
		if (format[a] == '%')
		{
			if (format[a + 1] != '\0')
			{
				print = sign(&format[a + 1]);
				if (print)
				{
					value = print(args);
					count = count + value;
					a = a + 2;
					continue;
				}
				else
				{
					_putchar('%');
					_putchar(format[a + 1]);
					a += 2;
					count += 2;
					continue;
				}
			}
			value = _putchar(format[a]);
			count = count + value;
			continue;
		}
		a++;
	}
	va_end(args);
	return (count);
}
