#include "binary_trees.h"

/**
* binary_tree_balance- measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree
* Return: - 0 : heights of the left and right subtrees are equal
* > 0 : height of the left subtree is greater than the height of the right
* < 0 : height of the right subtree is greater than the height of the left
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	/*calculation of the height of the left subtree*/
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);

	/*calculation of the height of the right subtree*/
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);

	/*return the balance factor of the tree*/
	return (height_left - height_right);
}


/**
* binary_tree_height- measures the height of a binary tree
* Description: distance from the chosen node to the farthest child
* @tree: pointer to the root node of the tree
* Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	/*calculation of the height of the left subtree*/
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);

	/*calculation of the height of the right subtree*/
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);

	/*comparison of heigt and return the biggest*/
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
