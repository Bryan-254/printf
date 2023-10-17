#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_deci - This function prints a decimal
 * @args: This parameter is decimal argument
 * Return: The counter
 */

int print_deci(va_list args)
{

	unsigned int abs, auxi, count, countnumb;
	int n;

	count = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			abs = (n * -1);
			count += _putchar('-');
		}
		else
			abs = n;

	auxi = abs;
	countnumb = 1;

	while (auxi > 9)
	{
		auxi /= 10;
		countnumb *= 10;
	}
	while (countnumb >= 1)
	{
		count += _putchar(((abs / countnumb) % 10) + '0');
		countnumb /= 10;
	}

	return (count);
}
/**
 * print_integ - This function prints integer
 * @args: This parameter is integer argument
 * Return: the decimal function
 */

int print_integ(va_list args)
{
	return (print_deci(args));
}
