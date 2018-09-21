#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: int passed in
 * Return: 0
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
