#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm
* @list: input list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev;

	/*Handle exceptions*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		next = current->next;
		/*compare to adjancent nodes and check if they are in order*/
		while (current->prev && (current->n < current->prev->n))
		{
			/*swap nodes*/
			prev = current->prev;

			current->prev = prev->prev;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;  /* update the head of the list */

			prev->next = current->next;
			if (prev->next)
				prev->next->prev = prev;

			current->next = prev;
			prev->prev = current;

			/* print list after swap */
			print_list(*list);
		}
		current = next;
	}
}
