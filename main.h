#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_a - new type to define a printer
 * @symbol: the data type
 * @print: function pointer to function to print data type
 */

typedef struct print_a
{
	char *symbol;
	void (*print)(va_list arg);
} print_a;

int _putchar(char c);
int _printf(const char *format, ...);
int n_con(va_list args, const char *format, print_a fs[]);
void print_char(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);
void print_percent(va_list arg);

#endif
