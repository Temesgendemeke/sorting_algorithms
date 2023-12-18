#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  selection_sort - sorts
 * @array: to be sorted
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for(i = 0; i < size -1; i++)
	{
		min = i;

		for(j = i+1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
  
/*
 * swap - function that swaps two variables
 * @a: parameter 1
 * @b: parameter 2
 * Return: void
 */

void swap(int *a, int *b)
{
        int temp = *a;

        *a = *b;
        *b = temp;
}
