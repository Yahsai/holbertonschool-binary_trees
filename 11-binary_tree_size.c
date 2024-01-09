#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to root node
 * Return: size of binary tree (successfull) 0 (failure)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);

	size = binary_tree_size(tree->left) + 1;
	size = size + binary_tree_size(tree->right);
	return (size);
}
