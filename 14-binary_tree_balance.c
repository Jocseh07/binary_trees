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
