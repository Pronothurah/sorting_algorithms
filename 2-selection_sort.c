#include "sort.h"

/**
* select_minimum - find the index of the smallest element.
* @arr: a pointer to an integer array
* @n: size of array
* @i: starting index
*
* Return: index to the smallest element
*/

size_t select_minimum(int *arr, size_t n, int i)
{
	size_t minIndex = i;
	size_t j;

	for (j = i + 1; j < n; j++)
		if (arr[j] < arr[minIndex])
			minIndex = j;
	return (minIndex);
}

/**
* swap - swaps two integers
* @a: first integer
* @b: second integer
*
* Return: void
*/

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
* selection_sort - sorts an array of integers in
* ascending order using the Selection sort algorithm
* @array: an array of integers
* @size: size of array
*
* Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t minIndex, i;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = select_minimum(array, size, i);
		if (minIndex != i)
		{
			swap(&array[i], &array[minIndex]);
		}
	}
}
