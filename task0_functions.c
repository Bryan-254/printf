#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_ch - This function prints character
 * @args: This is a character argument
 * Return: The number of characters to be printed
 */

int print_ch(va_list args)
{
	int x;

	x = va_arg(args, int);
	return (_putchar(x));
}

/**
 * print_st - This function prints a string
 * @args: This is a string argument
 * Return: The number of characters to be printed
 */

int print_st(va_list args)
{
	int a, count = 0;
	char *s;

	a = 0;
	s = va_arg(args, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (str[a] != '\0')
	{
		_putchar(s[a]);
		a++;
		count++;
	}
	return (count);
}

/**
 * print_perc - This function passes the percent sign
 * @args: This parameter is a string argument
 * Return: return the percent sign
 *
 */

int print_perc(va_list args)
{
	char *s;

	s = "%";

	if (va_arg(args, int) == *s)
	{
		return (*s);
	}
	return (*s);
}
