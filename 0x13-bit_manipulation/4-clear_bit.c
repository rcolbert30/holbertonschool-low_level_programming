#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at an index
 * @index: index of bit
 * @n: int
 * Return: 1 if worked, -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
        if ((sizeof(unsigned long int) * 8) < index)
                return (-1);
	
	*n &= ~(1 << index);
	return (1);
}
