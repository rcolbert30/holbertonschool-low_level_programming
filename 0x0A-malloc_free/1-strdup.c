#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strlen- function that finds length of a string
 * @str: string
 *Return: count
 */

int _strlen(char *str)
{
	int c;

	c = 0;

	while (str != 0)
	{
		c++;
		str++;
	}
	return (c);
}
/**
 * _strdup -returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 * @str:string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	d = malloc((_strlen(str) + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		d[i] = str[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
