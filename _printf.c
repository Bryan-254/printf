#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * _printf - This function mimics the printf function
 * @format: This is the string with format specifier
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, x;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);
		x = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
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
					m = get_func(format[x + 1]);
					if (m)
						count += m(args);
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
	return (-1);
}
