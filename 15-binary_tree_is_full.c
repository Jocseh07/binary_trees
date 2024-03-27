#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 r 1 if tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL))
			return (0);
		if ((tree->left == NULL && tree->right != NULL))
			return (0);
		if (binary_tree_is_full(tree->left) == 0)
			return (0);
		if (binary_tree_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
