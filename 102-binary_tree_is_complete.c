#include "binary_trees.h"

int check_is_complete(const binary_tree_t *tree, size_t t_depth, size_t level);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *leaves(const binary_tree_t *tree);
size_t leaf(const binary_tree_t *tree);
int has_sibling(binary_tree_t *node);

/**
 * binary_tree_is_complete - check if binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 r 1 if tree is complete
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t t_depth = 0;

	if (tree == NULL)
		return (0);
	t_depth = depth(leaves(tree));
	return (check_is_complete(tree, t_depth, 0));
}

/**
 * check_is_complete - check if binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * @t_depth: depth of the complete tree
 * @level: level of the current node being checked
 * Return: 0 r 1 if tree is complete
 */

int check_is_complete(const binary_tree_t *tree, size_t t_depth, size_t level)
{
	int a = 0;
	int b = 0;

	if (leaf(tree) == 1)
	{
		if (level == t_depth || level == t_depth - 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	a = check_is_complete(tree->left, t_depth, level + 1);
	b = check_is_complete(tree->right, t_depth, level + 1);
	if (a == 1 && b == 1)
		return (1);
	return (0);
}
/**
 * has_sibling - finds the sibling of a node
 * @node: node to find the sibling
 * Return: pointer to the node of the sibling
 */

int has_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (0);
	parent = node->parent;
	if ((node) == parent->left)
		return ((parent->right) ? 1 : 0);
	return ((parent->left) ? 1 : 0);
}

/**
 * depth - measures the depth of a node in a binary tree
 * @tree: pointer to tree to measure the depth
 * Return: 0 or depth
 */

size_t depth(const binary_tree_t *tree)
{
	size_t t_depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	t_depth = tree->parent ? 1 + depth(tree->parent) : 0;
	return (t_depth);
}

/**
 * leaves - returns a leaf of binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 or no of leaves
 */

const binary_tree_t *leaves(const binary_tree_t *tree)
{
	if (leaf(tree) == 1)
		return (tree);
	return (tree->left ? leaves(tree->left) : leaves(tree->right));
}

/**
 * leaf - checks if it is a leaf
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1 if leaf
 */

size_t leaf(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
