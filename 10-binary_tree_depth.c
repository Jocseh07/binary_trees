#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to tree to measure the depth
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t t_depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	t_depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (t_depth);
}
