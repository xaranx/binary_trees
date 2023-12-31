#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the oncle node, or NULL if no uncle
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *parents;

	parents = node->parent;
	grand_parent = parents->parent;
	if (node == NULL || parents == NULL || grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == parents)
		return (grand_parent->right);
	if (grand_parent->right == parents)
		return (grand_parent->left);
	return (NULL);
}
