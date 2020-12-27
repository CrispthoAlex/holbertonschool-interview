#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the size.
 * Return:  Size of a binary tree, else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_size(tree->left);
		if (tree->right)
			count += binary_tree_size(tree->right);
		count++; /* count root node */
	}
	return (count);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 is perfect or 0 is not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree)
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
			return (1);
	}
	return (0);
}

/**
 * heap_swap_parent_child - Swaps parent node if is greater than child node
 * @sonnode: Pointer to child node
 * @parent: Pointer to parent node
 * Return: void.
 */
void heap_swap_parent_child(heap_t **sonnode, heap_t **parent)
{
	/* Left and Right Child nodes   */
	heap_t *left_ch = (*sonnode)->left, *right_ch = (*sonnode)->right;
	heap_t *child = *sonnode, *_parent = *parent;

	if (child->n > _parent->n)
	{
		if (child->left)
			child->left->parent = _parent;
		if (child->right)
			child->right->parent = _parent;
		if (_parent->left == child)
		{
			if (_parent->right)
				_parent->right->parent = child;
			child->right = _parent->right;
			child->left = _parent;
		}
		else
		{
			_parent->left->parent = child;
			child->left = _parent->left;
			child->right = _parent;
		}
		if (_parent->parent)
		{
			if (_parent->parent->left == _parent)
				_parent->parent->left = child;
			else
				_parent->parent->right = child;
		}
		else
		{
			*parent = child;
		}
		child->parent = _parent->parent;
		_parent->parent = child;
		_parent->left = left_ch;
		_parent->right = right_ch;
	}
}

/**
 * heap_insert - function that inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value store in the node to be inserted
 * Return: A pointer to the inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *newnode = NULL;

	if (!*root)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}
	if (binary_tree_is_perfect(*root) || (!binary_tree_is_perfect((*root)->left)))
	{
		if ((*root)->left != NULL)
		{
			newnode = heap_insert(&((*root))->left, value);
			heap_swap_parent_child(&((*root)->left), root);
			return (newnode);
		}
		else
		{
			newnode = binary_tree_node(*root, value);
			(*root)->left = newnode;
			heap_swap_parent_child(&((*root)->left), root);
			return (newnode);
		}
	}
	else
	{
		if (!((*root)->right))
		{
			newnode = heap_insert(&((*root))->right, value);
			heap_swap_parent_child(&((*root)->right), root);
			return (newnode);
		}
		else
		{
			newnode = binary_tree_node(*root, value);
			(*root)->right = newnode;
			heap_swap_parent_child(&((*root)->right), root);
			return (newnode);
		}
	}
	return (newnode);
}
