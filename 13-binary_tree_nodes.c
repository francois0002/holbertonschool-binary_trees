#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: Pointer to root node of the binary tree
 * Return: Number of nodes with at least one child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	/* If node has at least 1 child, increment nodes */
	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	/* Recursively count nodes in left and right subtrees */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
