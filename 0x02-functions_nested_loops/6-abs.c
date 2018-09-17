#include <stdio.h>
#include "holberton.h"
/**
 * _abs - computes absolute value of an integer
 * @y: integer
 * Return: 0
*/
int _abs(int y)
{
	if (y < 0)
	{
		return (y * -1);
	}
	return (y);
}
