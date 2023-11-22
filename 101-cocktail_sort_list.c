#include "sort.h"


void swap(listint_t **list, listint_t *a, listint_t *b)
{
	if (a != b)
	{
		if (a->prev)
			a->prev->next = b;
		if (b->next)
			b->next->prev = a;

		a->next = b->next;
		b->prev = a->prev;

		b->next = a;
		a->prev = b;

		if (a == *list)
			*list = b;
	}
}

void cocktail_sort_list(listint_t **list)
{
	int swapped = 1;

	listint_t *start = *list;
	listint_t *end = NULL;

	while (swapped)
	{
		swapped = 0;

		while (start != end)
		{
			if (start->n > start->next->n)
			{
				swap(list, start, start->next);
				swapped = 1;
			}
			start = start->next;
		}

		if (!swapped)
			break;

		swapped = 0;
		end = start;

		while (start != *list)
		{
			if (start->n < start->prev->n)
			{
				swap(list, start->prev, start);
				swapped = 1;
			}
			start = start->prev;
		}
	}
}
