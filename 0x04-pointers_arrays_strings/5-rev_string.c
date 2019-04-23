#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: 0
*/
void rev_string(char *s)
{
	int length = 0, end, a;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	for (a = 0; a < length; a++)
		s[a] = s[end];
	end--;
	
	s[a] = '\0';

	printf("%s\n", s); 
}
