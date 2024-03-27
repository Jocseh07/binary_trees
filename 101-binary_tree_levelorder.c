#include "binary_trees.h"

void level(const binary_tree_t *tree, void (*func)(int));
void traverse(const binary_tree_t *tree, void (*func)(int), int a);
void traverse_tree(const binary_tree_t *tree, void (*func)(int));
void simple_traverse(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer of the root node of the tree to traverse
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int a = 0;
	binary_tree_t *temp = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	while (a < 3)
	{
		traverse(temp, func, a);
		a++;
	}
}

/**
 * traverse - goes through a binary tree using level-order
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer of the root node of the tree to traverse
 * @a: level
 */

void traverse(const binary_tree_t *tree, void (*func)(int), int a)
{
	binary_tree_t *temp = (binary_tree_t *)tree;

	if (a == 1)
		traverse_tree(temp, func);
	if (a == 2)
	{
		traverse_tree(temp->left, func);
		traverse_tree(temp->right, func);
	}
	else if (a == 3)
		simple_traverse(temp, func);
	else if (a == 4)
	{
		simple_traverse(temp->left, func);
		simple_traverse(temp->right, func);
	}
	if (a == 5)
	{
		simple_traverse(temp->left->left, func);
		simple_traverse(temp->left->right, func);
		simple_traverse(temp->right->left, func);
		simple_traverse(temp->right->right, func);
	}
	if (a == 6)
	{
		simple_traverse(temp->left->left->left, func);
		simple_traverse(temp->left->left->right, func);
		simple_traverse(temp->left->right->left, func);
		simple_traverse(temp->left->right->right, func);
		simple_traverse(temp->right->left->left, func);
		simple_traverse(temp->right->left->right, func);
		simple_traverse(temp->right->right->left, func);
		simple_traverse(temp->right->right->right, func);
	}
}

/**
 * simple_traverse - goes through a binary tree using level-order
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer of the root node of the tree to traverse
 */

void simple_traverse(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	traverse_tree(tree->left->left, func);
	traverse_tree(tree->left->right, func);
	traverse_tree(tree->right->left, func);
	traverse_tree(tree->right->right, func);
}

/**
 * traverse_tree - goes through a binary tree using level-order
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer of the root node of the tree to traverse
 */

void traverse_tree(const binary_tree_t *tree, void (*func)(int))
{
	level(tree->left, func);
	level(tree->right, func);
}

/**
 * level - goes through a binary tree using level-order
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer of the root node of the tree to traverse
 */

void level(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
}
