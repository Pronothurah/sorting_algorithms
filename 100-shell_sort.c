#include "sort.h"

/**
* get_maximum_gap - gets maximum gap using Knuth's sequence
* @size: size of array
*
* Return: gap size
*/

size_t get_maximum_gap(size_t size)
{
	size_t n;

	n = 1;
	while (n < size)
	{
		n = (n * 3) + 1;
	}
	return ((n - 1) / 3);
}

/**
* shell_sort - sorts an array of integers in ascending order
* using the Shell sort algorithm, using the Knuth sequence
* @array: input of array
* @size: size of array
*/
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int temp;

	if (!array || !size)
	{
		return;
	}

	for (gap = get_maximum_gap(size); gap; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j > gap - 1 && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}

}

