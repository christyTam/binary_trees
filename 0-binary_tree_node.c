#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaring new node with data type */
	binary_tree_t *new_node;

	/* allocate memory to the new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
        
	/* checking if the new node is NULL and if its NULL it should return NULL*/
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* assign value to the parent node */
	new_node->parent = parent;
	/* assign value to n node */
	new_node->n = value;
	/* assign NULL to left node */
	new_node->left = NULL;
	/* assign NULL to right node */
	new_node->right = NULL;

	/* return a pointer to the node */
	return (new_node);
}
