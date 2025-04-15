#include "binary_trees.h"

/**
 *binary_tree_sibling - function finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: value to return
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
	{
		if (parent->right == NULL)
			return (NULL);
		return (parent->right);
	}
	if (parent->left == NULL)
		return (NULL);
	return (parent->left);
}

