#include "sort.h"
/**
 *  selection_sort - sorts 
 * @array: to be sorted
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
    int i;
    int min;
    for(i = 0; i < size; i++)
    {
        min = array[i];
        for (int j = i + 1; j < size; j++)
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