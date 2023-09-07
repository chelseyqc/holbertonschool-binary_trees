#include "binary_trees.h"

/**
* binary_tree_height - find the height of a tree
* @tree: pointer to the tree
*
* Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure balance
*
* Return: the balance factor, else 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance = left_height - right_height;
	return (balance);
}
