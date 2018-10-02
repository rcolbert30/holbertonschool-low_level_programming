#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: 0
*/
char *cap_string(char *s)
{
	int k;

	for (k= 0; s[k] != '\0'; k++)
	{
		if (s[k] == 
