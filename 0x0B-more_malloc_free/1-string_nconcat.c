#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that get the length of a string
 * @s: string
 * Return: 0
 *
 */
unsigned int _strlen(char *l)
{
	unsigned int b = 0;

	while (l[b] != '\0')
		b++;
	return (b);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned int
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	a = _strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	b = _strlen(s2);
	if (n >= _strlen(s2))
	{
		n = b;
	}
	ptr = (char *)malloc(a + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < n; a++, b++)
	{
		ptr[a] = s2[b];
	}
	ptr[a] = '\0';
	return (ptr);
}

