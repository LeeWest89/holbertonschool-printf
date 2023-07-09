#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_num(int num); 

/**
 * print_unsigned_int - prints an unsigned int
 * @arg: argument to print
 */

void print_unsigned_int(va_list arg)
{
	unsigned int a = va_arg(arg, unsigned int);

	print_num(a);
}
