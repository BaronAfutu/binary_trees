#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts new node to the right of a parent node.
 *
 * @parent: Pointer to the node to insert the right child in.
 * @value: Value to be stored the new node.
 *
 * Return: Pointer to the created node ELSE NULL if fail.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}