#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all- prints anything
 * @format: list of arguments
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int kd = 0;
	char *ptr;

	va_start(args, format);

	while (format != '\0' && format[kd] == '\0')
	{
		switch (format[kd])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			ptr = va_arg(args, char *);
			if (!ptr)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		}
		kd++;
		printf(",");
	}
	va_end(args);
	printf("\n");
}
