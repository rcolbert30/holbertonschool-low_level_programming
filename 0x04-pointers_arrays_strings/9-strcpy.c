#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - function that copies a string
 * @dest: destination to copy to
 * @src: string to be copied
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];	
	}	
	return (dest);
}
