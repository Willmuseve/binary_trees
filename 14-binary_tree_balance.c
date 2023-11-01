#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a tree
 * @tree: pointer to tree
 * Return: 0 if tree is NULL or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to tree
 * Return: 0 if tree is NULL or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_h = right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_he += 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_h += 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
