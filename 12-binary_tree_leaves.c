#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or no of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			n_leaves += 1;
		n_leaves += binary_tree_leaves(tree->left);
		n_leaves += binary_tree_leaves(tree->right);
	}

	return (n_leaves);
}
