#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 r 1 if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right))
			return (0);
		if (binary_tree_is_perfect(tree->left) == 0)
			return (0);
		if (binary_tree_is_perfect(tree->right) == 0)
			return (0);
	}
	return (1);
}
