#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void swap(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition_arr(int *array, int low, int high, size_t size);
void quick_req(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_sort_helper(int *array, size_t left, size_t right);
void merge(int *array, size_t left, size_t mid, size_t right);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size, size_t i);
void quick_sort_hoare(int *array, size_t size);
void countSort(int *array, size_t size, int exp);
int getMax(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void bitonic_recursive(int *array, size_t size, int dir);
void bitonic_merge(int *array, size_t size, int dir);
void compare_and_swap(int *array, size_t i, size_t j, int dir);

#endif

