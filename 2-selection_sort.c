#include "sort.h"

/**
* selection_sort - sorts an array of integers in
* ascending order using the Selection sort algorithm
* @array: an array of integers
* @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t minIndex, i, j;
	int temp;

	/*Array does not need to be sorted if size less than 2*/
	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		minIndex = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}

		/*move smallest index to begining of the unsorted list(sorted part)*/
		if (minIndex != i)
		{
			temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
			/*print array*/
			print_array(array, size);
		}
	}
}
