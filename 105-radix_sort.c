#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getMax - Returns the maximum element from an array
 * @array: Array of integers
 * @size: Size of the array
 * Return: Maximum element
 */
int getMax(int *array, size_t size)
{
    int max = array[0];
    size_t i;

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

/**
 * countSort - Performs counting sort on an array based on significant digit
 * @array: Array of integers
 * @size: Size of the array
 * @exp: Exponent for the significant digit
 */
void countSort(int *array, size_t size, int exp)
{
    int *output = malloc(size * sizeof(int));
    int count[10] = {0};
    size_t i;

    if (output == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < size; i++)
        count[(array[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = size - 1; i < size; i--)
    {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }

    for (i = 0; i < size; i++)
        array[i] = output[i];

    free(output);
}

/**
 * radix_sort - LSD Radix Sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 */
void radix_sort(int *array, size_t size)
{
    int max = getMax(array, size);
    int exp;

    for (exp = 1; max / exp > 0; exp *= 10)
    {
        countSort(array, size, exp);
        print_array(array, size);
    }
}

