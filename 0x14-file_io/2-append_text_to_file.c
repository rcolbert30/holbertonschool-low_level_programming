#include <stddef.h>
#include <sys/types.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add at the end of file
 * Return: 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (text_content == NULL)
		return (-1);
	if (filename)
		fd = open(filename, O_RDWR | O_APPEND);
		close(fd);
	if (!fd)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}
