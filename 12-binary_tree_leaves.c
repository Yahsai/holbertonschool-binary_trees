#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: number of leaves (successfull) or 0 (failure)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->right == NULL && tree->left == NULL)
		return (count + 1);
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
