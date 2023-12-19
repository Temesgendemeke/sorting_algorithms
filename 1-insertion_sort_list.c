#include "sort.h"

/*
 * insertion_sort_list - function that inserts innan algorithm
 * @list: list of algorithm
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current;

	if (*list == NULL || (*list)->next == NULL)
		return;
	current = *list;

	while (current != NULL)
	{
		listint_t *next = current->next;

		 if (sorted == NULL || sorted->n >= current->n)
		 {
			 current->next = sorted;
			 current->prev = NULL;

			 if (sorted != NULL)
				 sorted->prev = current;
			 sorted = current;
		 }
		 else
		 {
			 listint_t *temp = sorted;
			 while (temp->next != NULL && temp->next->n < current->n)
				 temp = temp->next;

			 current->next = temp->next;
			 current->prev = temp;

			 if (temp->next != NULL)
				 temp->next->prev = current;

			 temp->next = current;
		 }
		 print_list(sorted);
		 current = next;
	}
	*list = sorted;
}
