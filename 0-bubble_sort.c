#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending
* order using the Bubble sort algorithm
* @array: input array of integers
* @size: size of array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				for (k = 0; k < size; k++)
				{
					if (k > 0)
						printf(", ");
					printf("%d", array[k]);
				}
				printf("\n");
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
