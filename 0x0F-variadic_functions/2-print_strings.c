#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the functions
 * Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list b_list;
	unsigned int kd;

	char *ptr;

	va_start(b_list, n);
	for (kd = 0; kd < n; kd++)
	{
		ptr = va_arg(b_list, char *);
		if (ptr != NULL)
		{
			printf("%s", ptr);
		}
		else
		{
			printf("(nil)");
		}
		if (kd != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(b_list);
}
