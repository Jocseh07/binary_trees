#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: 0 or balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int n_balance = 0;
	int n_left = 0;
	int n_right = 0;

	if (tree)
	{
		n_left = binary_tree_height(tree->left);
		n_right = binary_tree_height(tree->right);
		n_balance = n_left - n_right;
	}

	return (n_balance);
}

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

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (h_left > h_right ? h_left : h_right);
}
