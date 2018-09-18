#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - function that prints alphabet
 *
 * Return: 0
*/

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
