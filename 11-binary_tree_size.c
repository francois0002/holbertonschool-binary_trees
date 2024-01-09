#include "binary_trees.h"

/**
* binary_tree_size- measures the size of a binary tree
* Description: number of nodes in a binary tree
* @tree: pointer to the root node of the tree
* Return: size of the node
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
		return (0);
	/*calculation of the size of the left subtree*/
	if (tree->left != NULL)
		size_left = binary_tree_size(tree->left);

	/*calculation of the size of the right subtree*/
	if (tree->right != NULL)
		size_right = binary_tree_size(tree->right);

	/*return the size of the tree*/
	return (size_left + size_right + 1);
}
