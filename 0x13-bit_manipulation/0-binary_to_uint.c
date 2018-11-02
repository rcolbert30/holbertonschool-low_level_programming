#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or null
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int kd = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		kd = kd << 1;
		if (*b == '1')
			kd = (kd | 1);
		b++;
	}
	return (kd);
}
