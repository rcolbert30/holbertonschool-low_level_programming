#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - checks for uppercase letter
 *
 * @c: int
 * Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
