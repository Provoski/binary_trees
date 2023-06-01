#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer node
 * Return: height of tree or 0 if tree is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
