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
		return;
	}
	for (a = 0; a < n; a++)
	{
		b = a;
		while (b--)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
}
