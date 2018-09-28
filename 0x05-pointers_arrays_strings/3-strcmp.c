#include <stdio.h>
#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] == s2[count]; count++)
	{
		if (s1[count] == '\0')
		{
			return (0);
		}
	}
	return (s1[count] - s2[count]);
}
