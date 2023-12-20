#include "sort.h"
/**
 *  selection_sort - sorts
 * @array: to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_req(array, 0, size - 1, size);
}

void quick_req(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition_arr(array, low, high, size);
		
		quick_req(array, low, part - 1, size);
		quick_req(array,part + 1, high, size);
	}
}
/**
 * partition_arr - partitions the array.
 * @array: arra
 * @low: lower bound
 * @high: higher bound
 * @size: size of array
 *
 * Return: sorted index f pivot
 */
int partition_arr(int *array, int low, int high, size_t size)
{
	int i = low;
	int j, temp, pivot;

	pivot = array[high];
	
	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			i++;
		}
	}
	if (i != high)
	{
		temp = array[high];
		array[high] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
	return(i);
}

