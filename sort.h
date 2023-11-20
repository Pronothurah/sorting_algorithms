#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	int n;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);

void print_list(const listint_t *list);

/*Bubble Sort*/
void bubble_sort(int *array, size_t size);

/*Insertion Sort*/
void insertion_sort_list(listint_t **list);

/*Selection Sort*/
size_t select_minimum(int *arr, size_t n, int i);
void swap(int *a, int *b);
void selection_sort(int *array, size_t size);

/*Quick Sort*/
int *lomuto_partition(int *begin, int *end);
void quick_sort(int *array, size_t size);

/*Shell Sort*/
void shell_sort(int *array, size_t size);


#endif /* SORT_H */
