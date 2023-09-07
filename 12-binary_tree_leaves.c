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
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the tree to count the number of leaves
*
* Return: the leaves of the binary tree, else 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 1)
	{
		return (1);
	}
	size = binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right);
	return (size);
}
