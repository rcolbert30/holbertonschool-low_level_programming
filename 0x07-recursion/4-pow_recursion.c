#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the poer of y
 * @x: int x
 * @y: power
 * Return: -1 if y is lower than 0, product otherwise
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	else
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
