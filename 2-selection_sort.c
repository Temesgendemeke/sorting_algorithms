#include "sort.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

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
=======
/**
 *  selection_sort - sorts 
 * @array: to be sorted
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
    int i,j;
    int min;
    
    for(i = 0; i < size; i++)
    {
        min = array[i];
        for (j = i + 1; j < size; j++)
        {
            if(min > array[j])
            {
                int temp = min;
                min = array[j];
                array[i] = min; 
                array[j] = temp;
            }
            print_array(array, size);
        }

    }
}
>>>>>>> 3c7e84bd63cbb30dfe6186c634eb478c7db17032
