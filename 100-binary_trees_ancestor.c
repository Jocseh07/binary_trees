#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_ancestor - finds the ancestor of a node
 * @node: node to find the ancestor
 * Return: pointer to the node of the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *a;
	binary_tree_t *b;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	a = first->parent;
	b = second->parent;
	if (!a && b)
		return (binary_trees_ancestor(first, b));
	if (a && !b)
		return (binary_trees_ancestor(a, second));
	if (first == b)
		return (binary_trees_ancestor(first, b));
	if (second == a)
		return (binary_trees_ancestor(a, second));
	return (binary_trees_ancestor(a, b));
}
