#include "sort.h"
/**
 * shell_sort - sorts an array of integers (knuth sequence)
 * @array: array of integers
 * @size: size of array
 * Return: none
*/
void shell_sort(int *array, size_t size)
{
	int inner;
	unsigned int outer;
	int valueToInsert;
	int interval = 1;
	int elements = *(array);
	int i = 0;

	while (interval <= elements / 3)
	{
		interval *= 3 + 1;
	}
	while (interval > 0)
	{
		print_array(array, size);

		for (outer = interval; outer < size; outer++)
		{
			valueToInsert = array[outer];
			inner = outer;

			while (inner > interval - 1 && array[inner - interval] >= valueToInsert)
			{
				array[inner] = array[inner - interval];
				inner -= interval;
			}
			array[inner] = valueToInsert;
		}
		interval = (interval - 1) / 3;
		i++;
	}
}
