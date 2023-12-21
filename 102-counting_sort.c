#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * counting_sort - Sorts an array of integers in ascending order using Counting sort.
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max, i, *counting_array;
	size_t z, j;
	
	if (array == NULL || size < 2)
		return;
	max = array[0];
	for (z = 1; z < size; z++)
	{
		if (array[z] > max)
			max = array[z];
	}
	counting_array = malloc((max + 1) * sizeof(int));
	if (counting_array == NULL)
		return; 

	for (i = 0; i <= max; i++)
		counting_array[i] = 0;
	
	for (z = 0; z < size; z++)
		counting_array[array[z]]++;
	printf("Counting array:");
	for (i = 0; i <= max; i++)
		printf(" %d", counting_array[i]);
	printf("\n");
	
	j = 0;
	for (i = 0; i <= max; i++)
	{
		while (counting_array[z] > 0)
		{
			array[j] = i;
			j++;
			counting_array[i]--;
		}
	}
	free(counting_array);
}
