#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list b_list;

	unsigned int kd;
	
	if (separator == NULL)
	{
		return;
	}
	va_start(b_list, n);
	
	for (kd = 0; kd < n; kd++)
	{
		printf("%d", va_arg(b_list,const unsigned int));
		if (kd != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(b_list);
}
