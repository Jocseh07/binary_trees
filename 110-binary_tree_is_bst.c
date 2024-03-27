#include "binary_trees.h"

int check_if_bst(const binary_tree_t *tree, int a, int b);

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: pointer to root node of tree to check
 * Return: 1 if valid or 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_if_bst(tree, -2147483647, 2147483647));
}

/**
 * check_if_bst - Checks if a binary tree is a valid BST
 * @tree: pointer to node of tree
 * @a: low
 * @b: high
 * Return: 1 if valid or 0 otherwise
 */

int check_if_bst(const binary_tree_t *tree, int a, int b)
{
	int i, j;

	if (tree != NULL)
	{
		if (tree->n < a || tree->n > b)
			return (0);
		i = check_if_bst(tree->left, a, tree->n - 1);
		j = check_if_bst(tree->right, tree->n + 1, b);
		return (i && j);
	}
	return (1);
}
