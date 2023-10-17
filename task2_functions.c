#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - This function prints binary
 * @arg: The argument
 * Return: total number of binary digits processed
 */

int print_bin(va_list arg)
{
	unsigned int a;
	int  x, b;
	int arr[100];

	a = va_arg(arg, int);
	x = 0;

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}

	while (a > 0)
	{
		arr[x] = a % 2;
		a = a / 2;
		x++;
	}

	for (b = x - 1; b >= 0; b--)
	{
		_putchar(arr[b] + '0');
	}
	return (x);
}
