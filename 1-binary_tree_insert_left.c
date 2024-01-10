#include "binary_trees.h"

/**
* binary_tree_insert_left- inserts a node as the left-child of another node
* @parent: parent node
* @value: value of the node
* Return: punter to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	/*Create the new node*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/*If parent already has a left-child, the new node must take its place*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	/*The parent's left pointer points to the new node*/
	parent->left = new_node;

	return (new_node);
}
