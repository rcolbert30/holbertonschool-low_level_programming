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
 * bubble_sort - sorts an array of integers using bubble sort
 * @array: array of integers
 * @size: size of the array
 * Return: none
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; size - j - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
	if (swapped == false)
		break;
	}
}
