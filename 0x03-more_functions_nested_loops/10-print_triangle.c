#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: 0
*/
void print_triangle(int size)
{
	int margin, dist, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		margin = size - i;
	while (margin--)
	{
		_putchar(' ');
	}
	dist = i;
	while (dist--)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
