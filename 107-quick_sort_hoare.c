#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two elements in an array
 * @a: First element
 * @b: Second element
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * hoare_partition - Implements the Hoare partition scheme
 * @array: Array to partition
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 * Return: Index of the pivot
 */
int hoare_partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1, j = high + 1;

    while (1)
    {
        do
        {
            i++;
        } while (array[i] < pivot);

        do
        {
            j--;
        } while (array[j] > pivot);

        if (i >= j)
            return j;

        swap(&array[i], &array[j]);
        print_array(array, size);
    }
}

/**
 * quick_sort_recursive - Recursively sorts an array using quicksort
 * @array: Array to be sorted
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot = hoare_partition(array, low, high, size);
        quick_sort_recursive(array, low, pivot, size);
        quick_sort_recursive(array, pivot + 1, high, size);
    }
}

/**
 * quick_sort_hoare - Sorts an array of integers in ascending order
 * using the Quick sort algorithm with the Hoare partition scheme
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}

