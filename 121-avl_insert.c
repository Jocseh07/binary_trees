#include "binary_trees.h"

/**
 * avl_insert - check if binary tree is AVL tree
 * @tree: pointer to the root node to check
 * @value: value to insert
 * Return: the tree
 */

avl_t *avl_insert(avl_t **tree, int value)
{
	if (tree == NULL || value == 0)
		return (NULL);
	return (*tree);
}
