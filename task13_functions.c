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
	int x, count = 0;
	char *s;

	s = va_arg(args, char*);

	while (s[count] != '\0')
	{
		count++;
	}

	for (x = count - 1 ; x >= 0 ; x--)
	{
		putchar(s[x]);
	}

	return (count);
}
