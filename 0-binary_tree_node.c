#include "binary_trees.h"

/**
 * *binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put to node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
