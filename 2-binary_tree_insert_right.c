#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right side of a parent node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		return (new);
	}
	temp = parent->right;
	parent->right = new;
	new->parent = parent;
	new->n = value;
	new->right = temp;
	new->right->parent = new;
	new->left = NULL;
	return (new);
}
