#include <stdio.h>
/**
 * main - prints the alphabet in lower case.Using only 2 putchars
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
