#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a tree.
 *
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}