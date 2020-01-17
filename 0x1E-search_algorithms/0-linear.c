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

	x = 0;
	while (x < size)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
