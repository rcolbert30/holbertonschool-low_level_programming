#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianess
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	return (*y + 48);
}
