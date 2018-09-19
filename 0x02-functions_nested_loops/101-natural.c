#include <stdio.h>

/**
 * main - lidt natural numbers below 10 that are multiples of 3 and 6
 * computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
*/
int main(void)
{
	int a, b;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 15 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
