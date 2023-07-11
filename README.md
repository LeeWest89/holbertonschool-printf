Project Printf 

_printf - format and print data

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

prototypes:
int _putchar(char c);
int _printf(const char *format, ...);
int (*sign(const char *format))(va_list);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_next(va_list arg);

description:
the putchar function prints character and string out put.
the _printf function is the main function we use for creating the print structure with different formats.

conversion specifiers:
(A character that specifiers the type of conversion to be applied.)

%c - print a single character
%s - print a character string
%d - print a decimal number 
%o - prints a octal number
%i - print a integer number 
%u - print a unsigned decimal number 
%x - print a number in heagonal 
%% - print a percent sign 

Authors 
Lee West @leewest89 /n
George Rogers @grogers26
