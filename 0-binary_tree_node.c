#include "binary_trees.h"

/**
* binary_tree_t *binary_tree_node- create a binary tree node
* @parent: parent node
* @value: value of the node
* Return: punter to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
     /* error case parent NULL?*/
     /* error case free memory?*/


	binary_tree_t *new_node = NULL;

	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/*Initialize the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
