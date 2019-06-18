#include "sort.h"

/**
 * swap - swaps two integers
 * @xp: pointer to first int
 * @yp: pointer to second int
 * Return: none
*/

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sorts an array using selection sort
 * @array: array
 * @size: size of the array
 * Return: none
*/

void selection_sort(int *array, size_t size)
{
	size_t	i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;

		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
