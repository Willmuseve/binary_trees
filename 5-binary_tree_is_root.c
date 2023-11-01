#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to node
 * Return: 1 if node is root,
 * 0 otherwise
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* The node is the root if parent pointer is null. */

	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
