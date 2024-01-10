#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: height of tree (successful) NULL (failure)
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int count, l_height, r_height;

	count = 0;

	if (tree == NULL)
		return (count);
	if (!tree->left && !tree->right)
	{
		count = 0;
		return (count);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height > r_height)
		count = l_height + 1;
	else
		count = r_height + 1;
	return (count);
}
/**
 * binary_tree_balance - function that measures the balance factor of tree
 * @tree: pointer to root node
 * Return: balance factor (success) or 0 (failure)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, height_l = 0, height_r = 0;

	if (tree == NULL)
		return (balance);
	if (tree->left != NULL)
		height_l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		height_r = binary_tree_height(tree->right) + 1;
	balance = height_l - height_r;
	return (balance);
}
