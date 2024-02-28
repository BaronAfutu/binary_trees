#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a BT using in-order traversal.
 *
 * @tree: Pointer of the root of the tree to in-order traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}