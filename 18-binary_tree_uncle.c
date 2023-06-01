#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds sibling of a node
 * @node: pointer to node to find the uncle
 * Return: pointer to the uncle or 0 if node is NULL or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_p;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grand_p = node->parent->parent;
	if (node->parent == grand_p->left)
		return (grand_p->right);
	else
		return (grand_p->left);
}
