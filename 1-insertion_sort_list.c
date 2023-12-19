#include "sort.h"

/*
 * insertion_sort_list - function that inserts innan algorithm
 * @list: list of algorithm
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *nextnode, *temp, *back;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	nextnode = temp->next;
	while (temp)
	{
		if (temp->n < temp->prev->n)
		{
			back = temp->prev;
			while (back && (temp->n < back->n))
			{
				if (back->prev == NULL)
				{
					back->next = temp->next;
					if (temp->next != NULL)
						temp->next->prev = temp->prev;
					temp->prev = NULL;
					temp->next = back;
					(*list) = back->prev = temp;
				}
				else
				{
					back->next = temp->next;
					if (temp->next != NULL)
						temp->next->prev = temp->prev;
					temp->prev = back->prev;
					temp->next = back;
					back->prev->next = temp;
					back->prev = temp;
				}
				print_list(*list);
				back = temp->prev;
			}
		}
		temp = nextnode;
		if (temp)
			nextnode = nextnode->next;
	}
}
