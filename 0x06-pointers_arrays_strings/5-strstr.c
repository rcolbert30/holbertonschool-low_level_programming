#include <stdio.h>
#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int kd;
	char *ptr;

	kd = 0;

	for (; *haystack != '\0'; haystack++)
	{
		ptr = haystack;
		while (*ptr == needle[kd])
		{
			kd++;
			ptr++;
			if (*needle == '\0' || needle[kd] == '\0')
				return (haystack);
		}
		if (needle == 0)
		{
			return (0);
		}
	}
	return (0);
}
