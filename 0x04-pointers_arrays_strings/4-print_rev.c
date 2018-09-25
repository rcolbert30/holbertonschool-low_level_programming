#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @a: string
 * Return: string length
*/
int _strlen(char *a)
{
	int string;

	for (string = 0; string[a] != '\0'; string++)
	{
		;
	}
	return (string);
}

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: reverse string
*/
void print_rev(char *s)
{
	int reverse;

	for (reverse = _strlen(s) - 1; s[reverse] > 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}
