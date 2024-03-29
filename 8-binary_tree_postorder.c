#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a BT using post-order traversal.
 *
 * @tree: Pointer of the root of the tree to in-order traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
