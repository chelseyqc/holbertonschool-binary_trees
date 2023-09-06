#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a parent
 *
 * @node: Node to be checked
 *
 * Return: 1 if node is a parent, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	binary_tree_is_root(node->left);
	if ((node->left != NULL) && (node->right != NULL))
	{
		if (node->parent == NULL)
		{
			return (1);
		}
		return (0);
	}
	binary_tree_is_root(node->right);
	return (0);
}
