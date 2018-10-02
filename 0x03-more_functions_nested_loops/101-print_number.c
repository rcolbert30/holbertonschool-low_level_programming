#include <stdio.h>
#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: 0
*/
void print_number(int n)
{
	if (n >= 0 && n <= 1025)
	{
		_putchar(n + '0');
	}
}
