#include "sort.h"
/**
 * bubble_sort - sorts array in ascending order
 * @array: to be sorted
 * @size: length of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = array[0];
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
