#include <stdio.h>
#include "holberton.h"
/**
 * string_toupper - funcation that chznges all lowercase letters to upper
 * @s: char to be converted
 * Return: 0
*/
char string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	if (s[count] >= 65 && s[count] <= 92)
	{
		s[count] = s[count] - 32;
	}
}
	return (s);
}
