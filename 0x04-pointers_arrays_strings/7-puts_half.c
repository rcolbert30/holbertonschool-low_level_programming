#include <stdio.h>
#include "holberton.h"
/**
 * puts_half - prints half a string
 * @str: string
 * Return: 0
*/
void puts_half(char *str)
{
	int a;

	for (a = _strlen(str) / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}



#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
*/

int _strlen(char *s)
{
	int string;

	for (string = 0; string[s] != '\0'; string++)
	{
		;
	}
	return (string);
}
