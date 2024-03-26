#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree
 * @tree: pointer to root node of treee to measure size
 * Return: 0 or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size = 0;

	if (tree)
	{
		t_size += 1;
		t_size += binary_tree_size(tree->left);
		t_size += binary_tree_size(tree->right);
	}

	return (t_size);
}
