#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 *					right-child of another node
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Description: If parent already has a right-child, the new node
 *				must take its place, and the old right-child must
 *				be set as the right-child of the new node.
 *
 * Return: a pointer to the created node, or
 *			NULL on failure or
 *			if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* decleare a new node */
	binary_tree_t *new_node;
	/* check if parent not absent */
	if (!parent)
		return (NULL);
	/* allocate memory to new node */
	new_node = malloc(sizeof(binary_tree_t));
	/* check if new node is present */
	if (!new_node)
		return (NULL);
	/* assig value to nnew node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
