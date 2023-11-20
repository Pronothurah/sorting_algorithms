#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm
* @list: input list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	int temp_value;

	/*Handle exceptions*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		/*compare to adjancent nodes and check if they are in order*/
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			/*swap nodes*/
			temp_value = temp->n;
			temp->n = temp->prev->n;
			temp->prev->n = temp_value;
			temp = temp->prev;
			/* print list after swap */
			print_list(*list);
		}
		current = current->next;
	}
}
