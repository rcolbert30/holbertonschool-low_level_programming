#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order using quick sort
 * @array: array of integers
 * @size: size of an array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_first(array, 0, size - 1, size);
}
/**
 * quick_sort_first - where quicksort is happeneing, extra function to help
 * quick_sort function that takes in array and size
 * @array: array of integers
 * @size: size of an array
 * @low: values lower than pivot
 * @high: values higher than pivot
 * Return: none
*/
void quick_sort_first(int *array, int low, int high, size_t size)
{
	int pidx;

	if (low < high)
	{
		pidx = partition(array, low, high, size);
		quick_sort_first(array, low, pidx - 1, size);
		quick_sort_first(array, pidx + 1, high, size);
	}
}
/**
 * partition - takes last element as a pivot, places the pivot element at its
 * correct sorted position in sorted array, places all smaller to left and
 * all greater to the right (of the pivot)
 * @array: array of integers
 * @low: values lower than the pivot
 * @high: values higher than the pivot
 * @size: size of the array
 * Return: none
*/
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
				swap2(&array[i], &array[j], array, size);
			i += 1;
		}
	}
	if (high != i)
		swap2(&array[high], &array[i], array, size);
	return (i);
}
/**
 * swap2 - swaps two integers in an array (extra size and array parameter)
 * @xp: pointer to int
 * @yp: pointer to int
 * @array: array of integers
 * @size: size of the array
 * Return: none
*/
void swap2(int *xp, int *yp, int *array, size_t size)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	print_array(array, size);
}

