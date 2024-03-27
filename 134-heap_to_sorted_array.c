#include "binary_trees.h"

/**
 * heap_to_sorted_array - convert heap to sorted array
 * @heap: pointer to root node
 * @size: address to store size of array
 * Return: 0 or 1
 */

int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *a = NULL;

	if (heap == NULL || size == 0)
		*a = 0;
	else
		*a = 1;
	return (a);
}
