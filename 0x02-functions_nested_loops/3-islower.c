#include <stdio.h>
#include "holberton.h"
/**
 * _islower - function that checks for lowercase letter
 * @c: character to be checked
 * Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
