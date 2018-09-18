#include <stdio.h>
#include "holberton.h"
/**
 * main - print Holberton
 *
 * Return: 0
*/

int main(void)
{
	char array[] = "Holberton";
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(array[a]);
	_putchar('\n');
	}
	return (0);
}
