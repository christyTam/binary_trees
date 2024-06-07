#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full
 *         0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check if tree is absent */
	if (!tree)
		return (0);
	/* check if tree left and tree right is absent */
	if (!tree->right && !tree->left)
		return (1);
	/* check if tree right and tree left is present */
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
