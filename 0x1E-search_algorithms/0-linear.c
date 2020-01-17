#include "search_algos.h"
/**
 * linear_search - searches for a value in a array
 * @array: array of numbers
 * @size: size
 * @value: value to be searched
 * Return: Value
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	for (x = 0; x < size; x++)
		if (array[x] == value)
			return (x);
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
	return (-1);
}
