#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *sonnode = NULL;

	sonnode = malloc(sizeof(binary_tree_t));

	if (!sonnode)
		return (NULL);

	sonnode->n = value;
	sonnode->parent = parent;
	sonnode->left = NULL;
	sonnode->right = NULL;

	return (sonnode);
}
