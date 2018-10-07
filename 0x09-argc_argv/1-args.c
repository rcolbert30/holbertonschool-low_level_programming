#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argv) (void)(argv)
/**
 * main- prints the number of arguments passed onto it
 * @argc: takes in string
 * @argv:takes in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%i\n", argc - 1);
	return (0);
}

