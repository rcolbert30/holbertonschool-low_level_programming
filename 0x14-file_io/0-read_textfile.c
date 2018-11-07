#include <stddef.h>
#include <sys/types.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters it should read to print
 * Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int kd, r, w, cc;

	if (!filename)
		return (0);
	kd = open(filename, O_RDONLY);
	if (kd == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		return (0);
	}
	r = read(kd, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		return (0);
	}
	cc = close(kd);
	if (cc == -1)
		return (0);
		free(buffer);
		return (w);
}

