#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Description - If parent already has a left-child, the new node must
 *				take its place, and the old left-child must be set as
 *				the left-child of the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* decleare new node */
	binary_tree_t *new_node;
	/* checking the parent is absent */
	if (!parent)
		return (NULL);
	/* allocating space to the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	/* checking if new node iis absent */
	if (!new_node)
		return (NULL);
	/* assiging values to the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_nod->left = parent->left;
	parent->left = new_node;
	/* checking if new node have left */
	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
