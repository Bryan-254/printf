#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - This function prints binary
 * @numb: The unsigned int argument
 * Return: total number of binary digits processed
 */

int print_bin(int numb)
{
	if (numb == 0)
	{
		return (0);
	}

	int digit = numb % 2;
	int count = 1 + print_bin(numb / 2);
	printf("%d", digit);

	return (count);
}
