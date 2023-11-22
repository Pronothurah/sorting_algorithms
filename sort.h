#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>


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
void selection_sort(int *array, size_t size);

/*Quick Sort*/
size_t lomuto_partition(int *array, size_t size, ssize_t begin, ssize_t end);
void quickSort(int *array, size_t size, ssize_t begin, ssize_t end);
void quick_sort(int *array, size_t size);

/*Shell Sort*/
size_t get_maximum_gap(size_t size);
void shell_sort(int *array, size_t size);

/*cocktail sort*/
void swap(listint_t **list, listint_t *a, listint_t *b);
void cocktail_sort_list(listint_t **list);


#endif /* SORT_H */
