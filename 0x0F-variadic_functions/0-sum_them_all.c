#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;

	unsigned int sum = 0, kd;

	va_start(a_list, n);

	if (n == 0)
		return (0);

	for (kd = 0; kd < n; kd++)
	{
		sum += va_arg(a_list, const unsigned int);
	}
	va_end(a_list);
	return (sum);
}
