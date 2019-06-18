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
 * quick_sort - sorts an array using quick sort
 * @array: an array of integers
 * @size: size of the array
 * Return: none
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - sorts using a low, high
 * @array: array
 * @high: end
 * @low: start
 * @size: size of the array
 * Return: none
*/
void sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}

/**
 * partition - partions the array
 * @array: array
 * @low: start
 * @high: end
 * @size: size of the array
 * Return: none
*/
int partition(int *array, int low, int high, size_t size)
{
	int a, b, pivot;

	pivot = array[high];
	for (b = low, a = low - 1; b < high; b++)
	{
		if (array[b] < pivot)
		{
			a++;
			swap(&array[a], &array[b]);
			if (array[a] != array[b])
				print_array(array, size);
		}
	}
	swap(&array[a + 1], &array[high]);
	if (array[high] != array[a + 1])
		print_array(array, size);
	return (a + 1);
}
