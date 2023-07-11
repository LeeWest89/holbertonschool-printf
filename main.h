#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct print_a - new type to define a printer
 * @symbol: the data type
 * @print: function pointer to function to print data type
 */

typedef struct print_a
{
	char *symbol;
	int (*print)(va_list arg);
} print_a;

int _putchar(char c);
int _printf(const char *format, ...);
int (*sign(const char *format))(va_list);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);

#endif
