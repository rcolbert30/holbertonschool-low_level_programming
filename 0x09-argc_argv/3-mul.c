#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argv: number
 * @argc: number
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n1;
	int n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d", n1 * n2);
	printf("\n");
	return (0);
}

