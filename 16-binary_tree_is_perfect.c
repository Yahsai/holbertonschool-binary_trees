#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if the tree is full and the left and right subtrees have the same height */
	return (binary_tree_is_full(tree) && left_height == right_height);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the height of the taller subtree, plus 1 for the current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	/* Check if it's a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Check if both left and right subtrees exist */
	if (tree->left != NULL && tree->right != NULL)
	{
		/* Recursively check the left and right subtrees */
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	/* If one subtree is missing, the tree is not full */
	return (0);
}

