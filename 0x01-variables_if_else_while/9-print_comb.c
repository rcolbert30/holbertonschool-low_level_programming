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
	putchar(a + '0');
		for (b = 0; b <= 9; b++)
			putchar(b + '0');		
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
