#include "sort.h"
/**
 * swap - swaps two integers in an array
 * @xp: pointer to int
 * @yp: pointer to int
 * Return: none
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 * Return: none
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int min_idx;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
