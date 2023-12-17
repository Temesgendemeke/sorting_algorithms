#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    if (*list == NULL || (**list).next == NULL)
    {
        return;
    }

    listint_t *current = *list;
    
    while (current != NULL)
    {
        listint_t *key = current->next->n;
        size_t j = current->prev;

        while (current->n > key && current->prev != NULL)
        {

            current->next->n = current->n;
            current = current->prev;
        }
        current->next->n = key;
        
    }
    

    
}