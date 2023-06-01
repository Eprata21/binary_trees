#include "binary_trees.h"

/**
 * binary_tree_leaves - Number of leaves of a binary tree
 * @tree: Pointer
 * Return: 0 if it is empty
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (!tree)
		return (0);

	right_count = binary_tree_leaves(tree->right);
	left_count = binary_tree_leaves(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (right_count + left_count);

}
