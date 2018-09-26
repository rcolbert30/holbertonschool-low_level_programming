#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
*/
void rev_string(char *s)
{
	int a, b;
	char k, d;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++)
	{
		k = s[a];
		d = s[b];
		s[b] = d;
		s[a] = k;
		a--;
	}
}
