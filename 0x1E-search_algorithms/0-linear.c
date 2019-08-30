#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using linear search
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: first index where value is located, -1 on fail
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int r;

	if (array == NULL || size == 0)
		return (-1);

	for (r = 0; r < size; r++)
	{
		printf("Value checked array[%d] = [%d]\n", r, array[r]);
		if (array[r] == value)
			return (r);
	}
	return (-1);
}
