#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: number
 * Return: 0
*/
int print_last_digit(int y)
{
	int last = y % 10;

	if (y < 0)
		y = y * -1;
	_putchar(last + '0');
	return (last);
}
