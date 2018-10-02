#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints a square of sums
 * @a: pointer
 * @size: size of square
 * Return: 0
*/
void print_diagsums(int *a, int size)
{
	int kd;

	for (kd = 0; a[kd] < size; kd++)
	{
		
