#include "main.h"

/**
 * get_funct - This function searches for specifier
 * @x: The variable to the function
 * Return: The function
 */

int (*get_funct(char x))(va_list)
{
	int a = 0;
	speci arr[] = {
		{"c", print_ch},
		{"s", print_st},
		{"%", print_perc},
		{"d", print_deci},
		{"i", print_integ},
		{"r", print_rev},
		{"b", print_bin},
		{NULL, NULL}
	};

	while (arr[a].ph)
	{
		if (x == arr[a].ph[0])
		{
			return (arr[a].f);
		}
		a++;
	}
	return (NULL);
}
