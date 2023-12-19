#include "sort.h"

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
