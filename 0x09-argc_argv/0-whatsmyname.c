#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main- prints name of the program
 * @argc: takes in string
 * @argv: takes in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n ", argv[0]);
	}
	return (0);
}
