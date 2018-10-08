#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two variables
 * @argc: argument count
 * @argv: agruments passed
 * Return: 0
*/
int main(int argc, char **argv)
{
	int kd, sc, add;

	for (kd = 1; kd < argc; kd++)
	{
		for (sc = 0; argv[kd][sc] != '\0'; sc++)
		{
			if (!isdigit(argv[kd][sc]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[kd]);
	}
	printf("%i\n", add);
	return (0);
}
