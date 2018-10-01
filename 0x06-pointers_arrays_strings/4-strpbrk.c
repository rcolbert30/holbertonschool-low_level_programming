#include <stdio.h>
#include "holberton.h"
/**
 * _strpbrk - function that searches string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: pointer to the byte s
*/
char *_strpbrk(char *s, char *accept)
{
	int count, a;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[count] == accept[a])
			{
				return (s + count);
			}
		}
	}
	return (0);
}
