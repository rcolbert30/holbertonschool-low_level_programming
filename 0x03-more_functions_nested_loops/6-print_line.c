#include <stdio.h>
#include "holberton.h"

/**
 * print_line - prints a straigt line
 * @n: number to be passed in
 * Return: 0
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}

