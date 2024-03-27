#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find the sibling
 * Return: pointer to the node of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (node = parent->left)
		return (parent->right);
	return (parent->left);
}