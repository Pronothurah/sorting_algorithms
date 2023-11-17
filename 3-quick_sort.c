#include "sort.h"

/**
* lomuto_partition - partitions an array using the last item as pivot
* @begin: start of array
* @end: end of array
* Return: elements greater than the pivot are on the right side and vice versa
*/

int *lomuto_partition(int *begin, int *end)
{
	int *pivot = end - 1;
	int *i = begin - 1;
	int temp;
	int *j;

	for (j = begin; j < pivot; ++j)
	{

		if (*j <= *pivot)
		{
			++i;
			if (i != j)
			{
				temp = *i;

				*i = *j;
				*j = temp;
			}
		}
	}

	++i;
	temp = *i;

	*i = *pivot;
	*pivot = temp;

	return (i);
}

/**
* quick_sort - sorts an array of integers in ascending
* order using the Quick sort algorithm
* @array: pointer to an integer array
* @size: size of array
*
* Return: void
*/

void quick_sort(int *array, size_t size)
{
	int *pivot;

	if (size < 2)
	{
		return;
	}

	pivot = lomuto_partition(array, array + size);

	quick_sort(array, pivot - array);
	quick_sort(pivot + 1, size - (pivot - array) - 1);
}
