#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
