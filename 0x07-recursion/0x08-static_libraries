#include "holberton.h"
/**
 * prime_number - checks for prime number
 * @n: integer
 * @x: int
 * Return: 0
 */
int prime_number(int n, int x)
{
	if (x == n - 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime_number(n, x + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is prime
 * @n: integer
 * Return: 0
*/
int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_number(n, 2));
}
