#include "binary_trees.h"

/**
 * heap_insert - inserts value
 * @root: root node of the heap
 * @value: value to insert
 * Return: value
 */

heap_t *heap_insert(heap_t **root, int value)
{
	if (*root == NULL || value == 0)
		return (NULL);
	return (*root);
}