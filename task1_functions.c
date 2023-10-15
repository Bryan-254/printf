#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_d - This function prints a decimal
 * @args: This parameter is decimal argument
 * Return: The counter
 */

int print_d(va_list args)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - This function prints integer
 * @args: This parameter is integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
