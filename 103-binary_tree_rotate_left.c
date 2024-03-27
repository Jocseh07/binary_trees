#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: pointer to the root node of tree to rotate
 * Return: pointer to the new root node of tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *temp;

	if (tree == NULL)
		return (NULL);

	new = tree->right;
	temp = new->left;
	new->left = tree;
	tree->right = temp;
	if (temp != NULL)
		temp->parent = tree;
	temp = tree->parent;
	tree->parent = new;
	new->parent = temp;
	if (temp != NULL)
	{
		if (temp->right == tree)
			temp->right = new;
		else
			temp->left = new;
	}
	return (new);
}
