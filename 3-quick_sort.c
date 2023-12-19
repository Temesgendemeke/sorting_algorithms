#include "sort.h"
/**
 *  selection_sort - sorts
 * @array: to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
        quick_req(array, 0, size -1);
        
}

void quick_req(int *array, int low, int high)
{
    if (low < high)
    {
    int part = partition(array, low, high);

    quick_req(array, low, part - 1);
    quick_req(array,part + 1, high);
    }
    
}

int partition(int *array, int low, int high)
{
   int i = low;
   int j;
   int pivot = array[high];

   for (j = low; j < high; j++)
   {
       if (pivot >= array[j])
       {
        swap(&array[i], &array[j]);
        
        i++;
       }
       
   }
   swap(&array[i], &array[high]);
   print_array(array,high + 1);
   return i;
}

void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}