#include <stdio.h>
/**
 * main - prints the reverse alphabet in lower case.Using only 2 putchars
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
