#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_rev - This function prints a string in reverse
 * @args: This is a string argument
 * Return: Number of characters in the input string
 */

int print_rev(va_list args)
{
	char *s = va_arg(args, char*);
	int x;
	int y = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[y] != '\0')
	{
		y++;
	}
	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	return (y);
}
