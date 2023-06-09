#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to the left side of a parent node
 * @parent: pointer to parent node
 * @value: value of the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = new;
		new->n = value;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		return (new);
	}
	temp = parent->left;
	parent->left = new;
	new->parent = parent;
	new->n = value;
	new->left = temp;
	new->left->parent = new;
	new->right = NULL;
	return (new);
}
