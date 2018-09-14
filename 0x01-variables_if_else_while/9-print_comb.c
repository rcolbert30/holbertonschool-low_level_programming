#include <stdio.h>
/**
 * main - prints the alphabet in lower case.Using only 2 putchars
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	for (a = 1; a < 10; a++)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
