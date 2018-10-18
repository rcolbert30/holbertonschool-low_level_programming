#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- function that executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to the funciton
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}
