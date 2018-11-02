#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bit
 * @index: index
 * Return: 1 if it worked -1 else
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int ) * 8) < index)
		return (-1);
	*n = *n | 1 << index;
	return (*n);
}
