#include "binary_trees.h"

/**
* binary_tree_siblings - finds the sibling of a node
* @node: pointer to the node to check
*
* Return: returns the sibling, else NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}

/**
* binary_tree_uncle - finds the uncle of a node
* @node: a pointer to the node to find the uncle
*
* Return: a pointer to the node to the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (binary_tree_sibling(node->parent));
	}
	else if (node->parent->right == node)
	{
		return (binary_tree_sibling(node->parent));
	}
	else
	{
		return (NULL);
	}
}
