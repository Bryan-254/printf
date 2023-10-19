#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_point - This function prints pointer
 * @args: This is argument
 * Return: The pointer
 */

int print_point(va_list args)
{
	int x;
	void *ptr = va_arg(args, void*);
	char *ptr_str = (char *)ptr;

	int char_count = 0;

	for (x = 0; ptr_str[x] != '\0'; x++)
	{
		putchar(ptr_str[x]);
		char_count++;
	}

	return (char_count);
}
