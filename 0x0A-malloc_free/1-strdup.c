#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 * @str:string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *d;
	int k, m;

	if (str == 0)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0'; k++)
		;
	k++;
	d = malloc(k  * sizeof(*d));
	if (d == 0)
	{
		return (NULL);
	}
	for (m = 0; m < k; m++)
		d[m] = str[m];
	return (d);
}
