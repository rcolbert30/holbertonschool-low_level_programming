#include <stdio.h>
#include "holberton.h"
/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: string
 * Return: string to stdout
*/
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
