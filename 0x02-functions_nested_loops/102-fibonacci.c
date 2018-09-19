#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
	int t1 = 1, t2 = 2, nextTerm = 0, n;

	nextTerm = t1 + t2;

	printf("1, ");
	printf("2, ");
	for (n = 3; n <= 50; n++)
	{
		printf("%d, ",nextTerm);
		t1 = t2;
	 	t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;
}
