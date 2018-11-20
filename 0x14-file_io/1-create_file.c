#include <stddef.h>
#include <sys/types.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: string to write to the file
 * Return: 0
*/

int create_file(const char *filename, char *text_content)
{
	int kd, z;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = " ";

	z = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!z)
		return (-1);
	for (kd = 0; text_content[kd] != '\0'; kd++)
		;
	if (write(z, text_content, kd) >= 0)
	{
		close(z);
		return (1);
	}
	else
		return (-1);
}
