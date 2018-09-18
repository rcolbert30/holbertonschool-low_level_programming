#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
