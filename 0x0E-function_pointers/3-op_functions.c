#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: integer
 * @b: integer
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers
 * @a: integer
 * @b: integer
 * Return: product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: integer
 * @b: integer
 * Return: division of a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder of two integers
 * @a: integers
 * @b: integers
 * Return: remainder of a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

