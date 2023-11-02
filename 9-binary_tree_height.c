#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, padding;

	if (tree == NULL)
		return (0);

	padding = 0;
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		padding = 1;

	if (left_height > right_height)
		return (left_height + padding);
	else
		return (right_height + padding);
}
