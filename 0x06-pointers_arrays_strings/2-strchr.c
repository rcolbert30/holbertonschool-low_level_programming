#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurance of the character c
*/
char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] != '\0'; find++)
	{
		if (s[find] == c)
		{
			return (s + find);
		}
	}
	if (c == 0)
	{
		return (s + find);
	}
	return (0);
}
