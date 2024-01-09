#include "binary_trees.h"

/**
* binary_tree_leaves- counts the leaves in a binary tree
* @tree: pointer to the root node of the tree
* Return: number of leaves in the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0;
	size_t leaves_right = 0;

	if (tree == NULL)
		return (0);

	/*calculation of the leaves of the left subtree*/
	if (tree->left != NULL)
		leaves_left = binary_tree_leaves(tree->left);

	/*calculation of the leaves of the right subtree*/
	if (tree->right != NULL)
		leaves_right = binary_tree_leaves(tree->right);

	/*return the leaves of the tree*/
	if (tree->left == NULL && tree->right == NULL)
		return (leaves_left + leaves_right + 1);
	else
		return (leaves_left + leaves_right);
}
