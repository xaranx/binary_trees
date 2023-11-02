#include "binary_trees.h"


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node, count;

	count = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right)
		count = 1;
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);
	return (left_node + right_node + count);
}
