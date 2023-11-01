#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through
 * a binary tree using post_order traversal
 * @tree: pointer to tree
 * @func: function pointer to each node
 * Return: void
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse recursively left subtree */
	binary_tree_postorder(tree->left, func);

	/* traverse recursively right subtree */
	binary_tree_postorder(tree->right, func);

	/* current node */
	func(tree->n);
}
