#include <stdio.h>
#include "holberton.h"
/**
 * main - prints 1-10, multiples of 3 fiz, 5 buz, 15 fizbuzz
 * Return: 0
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	return (0);
}

