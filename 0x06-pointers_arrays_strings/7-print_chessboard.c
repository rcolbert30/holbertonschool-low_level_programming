#include <stdio.h>
#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: pointer
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int kd, sc;

	for (kd = 0; kd < 8; kd++)
	{
		for (sc = 0; sc < 8; sc++)
		{
			_putchar(a[kd][sc]);
		}
		_putchar('\n');
	}
}
