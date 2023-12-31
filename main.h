#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - This structure is the struct specifier
 * @valid: this is the valid character.
 * @f: function pointer in the struct
 *
 */

typedef struct specifier
{
	char *ph;
	int (*f)(va_list);
} speci;

int _printf(const char *format, ...);
int print_ch(va_list args);
int print_st(va_list args);
int print_deci(va_list args);
int print_integ(va_list args);
int _putchar(char c);
int print_perc(va_list args);
int (*get_funct(char x))(va_list args);
int print_rev(va_list args);
int print_bin(va_list arg);

#endif
