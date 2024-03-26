#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or no of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			n_nodes += 1;
		n_nodes += binary_tree_nodes(tree->left);
		n_nodes += binary_tree_nodes(tree->right);
	}

	return (n_nodes);
}
