#include <stdio.h>

/**
 * main - prints all arguments it recieves
 *@argc: number of arguments
 *@argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k = 0;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}

