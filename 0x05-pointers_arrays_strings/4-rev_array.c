#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 * Result: 0
*/
void reverse_array(int *a, int n)
{
	int reverse, b, c;

	b = n - 1;

	for (reverse = 0; reverse < n / 2; b--, reverse++)
	{
		c = a[reverse];
		a[reverse] = a[b];
		a[b] = c;
	}
}
