#include "main.h"

/**
 * get_funct - This function searches for specifier
 * @x: The variable to the function
 * Return: The function
 */

int (*get_funct(char x))(va_list)
{
	int a = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	while (arr[a].valid)
	{
		if (x == arr[a].valid[0])
		{
			return (arr[a].f);
		}
		a++;
	}
	return (NULL);
}