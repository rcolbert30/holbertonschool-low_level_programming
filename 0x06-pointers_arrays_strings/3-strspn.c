#include <stdio.h>
#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment 
 * @accept: portion of string
 * Return: number of bytes in s that contains only bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int count, a;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[count] == accept[a])
			{
				;
			}
		}
	}
	return (count);
}
