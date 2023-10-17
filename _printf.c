#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * _printf - This function mimics the printf function
 * @format: This is the string with the format specifier
 * Return: The number of characters to be  printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, x;
		int (*b)(va_list);
		va_list args;

		va_start(args, format);
		x = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-2);
		while (format != NULL && format[x] != '\0')
		{
			if (format[x] == '%')
			{
				if (format[x + 1] == '%')
				{
					count += _putchar(format[x]);
					x += 2;
				}
				else
				{
					b = get_funct(format[x + 1]);
					if (b)
						count += b(args);
					else
						count = _putchar(format[x]) + _putchar(format[x + 1]);
					x += 2;
				}
			}
			else
			{
				count += _putchar(format[x]);
				x++;
			}
		}
		va_end(args);
		return (count);
	}
	return (-2);
}
