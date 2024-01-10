#include "binary_trees.h"

/**
* binary_tree_insert_right- inserts a node as the right-child of another node
* @parent: parent node
* @value: value of the node
* Return: punter to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	/*Create the new node*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/*If parent already has a right-child, the new node must take its place*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	/*The parent's right pointer points to the new node*/
	parent->right = new_node;

	return (new_node);
}
