#include "search_algos.h"
/**
 * binary_search - searches for the value in sorted array using binary search
 * @array: sorted array of numbers
 * @size: size of the array
 * @value: value to search for
 * Return: location of the value, -1 on fail
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (right - left) / 2 + left;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
