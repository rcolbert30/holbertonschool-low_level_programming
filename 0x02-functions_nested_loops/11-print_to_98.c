#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n ot 98
 * @n: number
 * Return: 0
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d", a);
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (a = n; a > 98 ; a--)
		{
			printf("%d", a);
			printf(", ");
		}
	}
	printf("98");
	printf("\n");
}
