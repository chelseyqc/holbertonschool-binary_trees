#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if the node is a leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	binary_tree_is_leaf(node->left);
	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}
	binary_tree_is_leaf(node->right);
	return (0);
}

/**
 * binary_tree_nodes - checks if a node is a leaf
 *
 * @tree: pointer to the node to check
 *
 * Return: 1 if the node is a leaf, else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 0)
	{
		count = 1 + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right);
		return (count);
	}
	return (count);
}
