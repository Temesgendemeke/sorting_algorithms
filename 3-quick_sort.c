#include "sort.h"
/**
 *  selection_sort - sorts
 * @array: to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
    int pivot = array[size - 1];
    size_t i, j;

    if (size <= 0)
    {
        return;
    }

    for(i = 0; i < size - 1; i++)
    {
        pivot = array[size - i - 1];
        for(j = 0; j < size - 1; j++)
        {
            if(pivot <= array[j] && array[j] >= array[j + 1])
            {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            }
            print_array(array, size);
        }
        
    }
    
}