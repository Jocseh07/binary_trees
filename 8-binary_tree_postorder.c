#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through tree using postorder traversal
 * @tree: pointer to root node to travers
 * @func: pointer to a funciton to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
