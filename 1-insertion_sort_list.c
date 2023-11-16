#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm
* @list: input list
*
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current = *list;
	listint_t *next, *temp;

	while (current != NULL)
	{
		next = current->next;
		if (sorted == NULL || current->n <= sorted->n)
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && current->n > temp->next->n)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			temp->next = current;
		}

		current = next;
	}
	*list = sorted;
}
