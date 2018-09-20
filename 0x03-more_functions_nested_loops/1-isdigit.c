#include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - function that checks for a digit (0 trhough 9)
 * @c: ints passed through
 * Return: 1 if c is a digit 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
