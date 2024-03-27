#include "binary_trees.h"
/**
 * bst_insert - insert a value in bst
 * @tree: double pointer to the root node of the bst to insert
 * @value: vaue to store in the node to be inserted
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *a, *b;

	if (tree != NULL)
	{
		a = *tree;
		if (a == NULL)
		{
			b = binary_tree_node(a, value);
			if (b == NULL)
				return (NULL);
			*tree = b;
			return (*tree);
		}
		if (value < a->n)
		{
			if (a->left != NULL)
				return (bst_insert(&a->left, value));
			b = binary_tree_node(a, value);
			if (b == NULL)
				return (NULL);
			a->left = b;
			return (a->left);
		}
		if (value > a->n)
		{
			if (a->right != NULL)
				return (bst_insert(&a->right, value));
			b = binary_tree_node(a, value);
			if (b == NULL)
				return (NULL);
			a->right = b;
			return (a->right);
		}
	}
	return (NULL);
}