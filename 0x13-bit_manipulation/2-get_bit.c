#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of bit
 * @n: int
 * Return: 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
