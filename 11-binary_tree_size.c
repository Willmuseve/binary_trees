#include "binary_trees.h"

/**
 * binary_tree_size - measure size of a tree
 * @tree: pointer to tree
 * Return: 0 if tree is NULL
 * or size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	l = r = 0;
	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->l);
	right = binary_tree_size(tree->r);

	return (left + right + 1);
}
