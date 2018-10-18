#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main functiom of the calc program
 * @argc: argument count
 * @argv: argument variables
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sc, kd, calc;
	int (*champ)(int, int);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	champ  = get_op_func(argv[2]);
	if (champ == 0)
	{
		printf("Error\n");
		exit(99);
	}
	sc = atoi(argv[1]);
	kd = atoi(argv[3]);
	calc = champ(sc, kd);
	printf("%d\n", calc);
	return (0);
}
