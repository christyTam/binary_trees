#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* assign value */
	size_t depth = 0;
	/* check if tree is absent */
	if (!tree)
		return (0);
	/* check if tree point to parent */
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
