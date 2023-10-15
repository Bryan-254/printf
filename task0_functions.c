#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - This function prints character
 * @args: This is a character argument
 * Return: The number of characters to be printed
 */

int print_c(va_list args)
{
	int x;

	x = va_arg(args, int);
	return (_putchar(x));
}

/**
 * print_s - This function prints a string
 * @args: This is a string argument
 * Return: The number of characters to be printed
 */

int print_s(va_list args)
{
	int a, count = 0;
	char *str;

	a = 0;
	str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
		count++;
	}
	return (count);
}

/**
 * print_percent - This function passes the percent sign
 * @args: This parameter is a string argument
 * Return: return the percent sign
 *
 */

int print_percent(va_list args)
{
	char *str;

	str = "%";

	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
