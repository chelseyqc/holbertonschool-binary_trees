#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is a parent
* @node: node to be checked
*
* Return: 1 if node is a parent, else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}

/**
* binary_tree_depth - find the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: the depth of the node, else 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || binary_tree_is_root(tree) == 1)
	{
		return (0);
	}
	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
