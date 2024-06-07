#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{	
	/* check if node or node point to parent is absent */
	if (!node || !node->parent)
		return (NULL);
	/* check if node is equal to node parent left*/
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
