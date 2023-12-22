#include "sort.h"

/**
 * heap_sort - Sorts an array of integers using the heap sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i, z;
    if (array == NULL || size < 2)
        return;

    for (i = size / 2 - 1; i >= 0; i--)
        heapify(array, size, i);

    for (z = size - 1; z > 0; z--) {
        swap(&array[0], &array[z]);
        print_array(array, size);
        heapify(array, z, 0);
    }
}
/**
 * heapify - Adjusts a binary heap to satisfy the heap property.
 * @array: The array representing the binary heap.
 * @size: The size of the heap.
 * @i: The index to start the heapify process.
 */
void heapify(int *array, size_t size, size_t i)
{
    size_t largest = i;
    size_t left = 2 * i + 1;
    size_t right = 2 * i + 2;

    if (left < size && array[left] > array[largest])
        largest = left;

    if (right < size && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        swap(&array[i], &array[largest]);
        print_array(array, size);
        heapify(array, size, largest);
    }
}

/**
 * swap - Swaps two integers in an array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

