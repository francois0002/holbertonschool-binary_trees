#include "binary_trees.h"

/**
* binary_tree_is_full- checks if the tree is full
* @tree: pointer to the root node of the tree
* Return: 1 if the tree is full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);

	/* Check if the current node is a leaf (has no children) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively check if both left and right subtrees are full */
	full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (full);
}

