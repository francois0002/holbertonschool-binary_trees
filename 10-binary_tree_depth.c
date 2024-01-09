#include "binary_trees.h"

/**
* binary_tree_depth- measures the depth of a node in a binary tree
* Description: distance from the chosen node to the root
* @tree: pointer to the root node of the tree
* Return: depth of the node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	/*calculation of the depth of the left subtree*/
	if (tree->parent != NULL)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
