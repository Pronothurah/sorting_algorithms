#include "sort.h"
#include <unistd.h>

/**
* lomuto_partition - partitions an array using the last item as pivot
* @array: input array
* @size: size of array
* @begin: start of sort range (lower index)
* @end: end of sort range (higher index)
*
* Return: size_t
*/

size_t lomuto_partition(int *array, size_t size, ssize_t begin, ssize_t end)
{
	/* select the right most element as pivot */
	int pivot = array[end];

	/* set partition index as start initially */
	int partition_index = begin;

	int i, temp;

	for (i = begin; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (partition_index != i)
			{
				temp = array[partition_index];
				array[partition_index] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			partition_index++;
		}
	}
	if (partition_index != end)
	{
		/* swap pivot with element at partion index */
		temp = array[partition_index];
		array[partition_index] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (partition_index);
}

/**
* quickSort - sorts array recursively using lomuto
* @array: input array
* @size: size of array
* @begin: start of sort range (lower index)
* @end: end of sort range (higher index)
*/

void quickSort(int *array, size_t size, ssize_t begin, ssize_t end)
{
	size_t pivot;

	if (begin < end)
	{
		pivot = lomuto_partition(array, size, begin, end);

		quickSort(array, size, begin, pivot - 1);
		quickSort(array, size, pivot + 1, end);
	}
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
	/*Array does not need to be sorted if null*/
	if (!array || !size)
	{
		return;
	}

	/*sort array using from start to end*/
	quickSort(array, size, 0, size - 1);
}
