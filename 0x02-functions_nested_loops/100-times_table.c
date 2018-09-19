#include <stdio.h>
#include "holberton.h"
/**                                                                                                             
 * print_to_98 - prints all natural numbers from n ot 98                                                        
 * @n: number                                                                                                   
 * Return: 0                                                                                                    
*/
void print_times_table(int n)
{
	int a, b, mul;

        for (a = 0; a <= n; a++)
        {
                for (b = 0; b <= n; b++)
                {
                mul = a * b;
                if (b == 0)
                {
                        _putchar(mul + '0');
                }
                else if (mul <= 9)
                {
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
			_putchar(' ');
                        _putchar(mul + '0');
                }
                else if (mul >= 10 && mul < 100)
                {
                        _putchar(',');
                        _putchar(' ');
			_putchar(' ');
                        _putchar(mul / 10 + '0');
                        _putchar(mul % 10 + '0');
                }
		else if (mul >= 100)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(mul / 100 + '0');
			_putchar(mul / 10 % 10 + '0');
			_putchar(mul % 10 + '0');
        	}
		if ( n > 15 || n < 0)
			return;
	}
        _putchar('\n');
        }
}
