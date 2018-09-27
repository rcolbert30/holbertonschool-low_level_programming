#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int count, count2;

	for (count = 0; dest[count] != '\0'; count++)
	{
		;
	}
	for (count2 = 0; src[count2] != '\0' && count2 < n; count2++)
	{
		dest[count] = src[count2];
	}
	return (dest);
}
