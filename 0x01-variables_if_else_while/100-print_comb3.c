#include <stdio.h>
/**
 * main - prints the alphabet in lower case.Using only 2 putchars
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a == 9 && b == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
