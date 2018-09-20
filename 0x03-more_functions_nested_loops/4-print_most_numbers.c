#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - prints 0 - 9
 * Return: 0
*/
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != 4)
		_putchar(a);
	}
	_putchar('\n');
}
