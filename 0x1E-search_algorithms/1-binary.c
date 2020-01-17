#include "search_algos.h"
/**
 * print_array - prints an array segment
 * @array: array to print
 * @start: where to start
 * @end: where to end
 * Return: none
*/
void print_array(int *array, unsigned int start, unsigned int end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		printf("%d", array[start]);
		start++;

		if (start <= end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search algo
 * @array: array of numbers
 * @size: size of the array
 * @value: value to search for
 * Return: value
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int max = (size - 1);
	unsigned int min = 0;
	unsigned int mid;

	while (max >= min)
	{
		print_array(array, min, max);
		mid = (max + min) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			max = (mid - 1);
		else
			min = (mid + 1);
	}
	return (-1);
}
