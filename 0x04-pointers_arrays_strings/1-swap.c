#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - swaps two integers
 * @a: integer
 * @b: integer
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
