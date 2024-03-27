#include "binary_trees.h"

/**
 * bst_search - searchs for a value in a bst
 * @tree: pointer to the root node of the bst
 * @value: value to search in the tree
 * Return: pointer to the node containing the value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));

	return (bst_search(tree->right, value));
}
