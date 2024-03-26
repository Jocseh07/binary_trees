#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 r 1 if tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right))
			return (0);
		if (binary_tree_is_full(tree->left) == 0)
			return (0);
		if (binary_tree_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}