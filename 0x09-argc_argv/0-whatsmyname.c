#include <stdio.h>

/**
 * main- prints name of the program
 * @argc: takes in string
 * @argv: takes in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s ", argv[k]);
	}
	return (0);
}
