#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that ocncatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, j, k;
	char *ptr;

	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";
	for (count1 = 0; s1[count1] != '\0'; count1++)
	{
		;
	}
	for (count2 = 0; s2[count2] != '\0'; count2++)
	{
		;
	}
	count2++;
	ptr = malloc(sizeof(char) * (count1 + count2 +  1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0, k = 0; j < (count1 + count2); j++)
	{
		if (j < count1)
			ptr[j] = s1[j];
		else
			ptr[j] = s2[k++];
	}
	return (ptr);
}
