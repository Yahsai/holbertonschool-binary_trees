#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	/* If the parent is the left child, return the right child of the grandparent (if exists) */
	if (node->parent == node->parent->parent->left && node->parent->parent->right != NULL)
		return (node->parent->parent->right);

	/* If the parent is the right child, return the left child of the grandparent (if exists) */
	if (node->parent == node->parent->parent->right && node->parent->parent->left != NULL)
	return (node->parent->parent->left);

	return (NULL); /* Node has no uncle */
}
