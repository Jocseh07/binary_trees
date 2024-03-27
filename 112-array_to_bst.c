#include "binary_trees.h"

/**
 * array_to_bst - build binary search tree from an array
 * @array: pointer to first element of the array to be converted
 * @size: number of element in the array
 * Return: the bst
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t a;
	bst_t *b = NULL;

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		if (bst_insert(&b, array[a]) == NULL)
			return (NULL);
	}
	return (b);
}
