#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - function that concatentates two strings
 * @dest: destination strng
 * @src: source string
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int count, count2;

	for (count = 0; dest[count] != '\0'; count++)
	{
		;
	}
	for (count2 = 0; src[count2] != '\0'; count2++)
	{
		dest[count] = src[count2];
	}
	return (dest);
}
