#include "holberton.h"
/**
 * factorial - computes the facotrial of a given number
 * @n: number to facotrial
 * Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
