#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nOfNodes = 0;

	if (tree != NULL)
	{
		nOfNodes += (tree->left || tree->right) ? 1 : 0;
		nOfNodes += binary_tree_nodes(tree->left);
		nOfNodes += binary_tree_nodes(tree->right);
	}

	return (nOfNodes);
}