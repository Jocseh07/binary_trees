#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 or size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	if (tree == NULL)
		return (0);

	h_left = tree->left ? 1 + _height(tree->left) : 0;
	h_right = tree->right ? 1 + _height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}
