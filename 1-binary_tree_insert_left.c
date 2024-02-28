#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node to the left of a parent node.
 *
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to be stored the new node.
 *
 * Return: Pointer to the created node ELSE NULL if fail.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
