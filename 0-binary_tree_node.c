#include "binary_trees.h"

/**
 * binary_tree_node - Creates a BT node.
 *
 * @parent: A pointer to the parent of the new node.
 * @value: The value to be stored in the new node.
 *
 * Return: a pointer to the new node, ELSE NULL if fail.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
