#include "sort.h"

/**
 * merge_s - merge the sub array
 * @array: list of array
 * @temp: temp
 * @left: left array
 * @mid: mid array
 * @right: right array
 * Return: void
 */

void merge(int *array, size_t left, size_t mid, size_t right)
{
    size_t i, j, k;
    size_t n1 = mid - left + 1;
    size_t n2 = right - mid;
    int *larray, *rarray;

    larray = malloc(n1 * sizeof(int));
    rarray = malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        larray[i] = array[left + i];
    for (j = 0; j < n2; j++)
        rarray[j] = array[mid + 1 + j];

    i = 0; 
    j = 0; 
    k = left; 

    while (i < n1 && j < n2) {
        if (larray[i] <= rarray[j]) {
            array[k] = larray[i];
            i++;
        } else {
            array[k] = rarray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = larray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rarray[j];
        j++;
        k++;
    }
    printf("[Done]:");
    print_array(array + left, n1 + n2);

    free(larray);
    free(rarray);
}

void merge_sort_helper(int *array, size_t left, size_t right)
{
	size_t mid;

    if (left < right) {
        mid = left + (right - left) / 2;

        merge_sort_helper(array, left, mid);
        merge_sort_helper(array, mid + 1, right);

        merge(array, left, mid, right);
    }
}

void merge_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    merge_sort_helper(array, 0, size - 1);

}
