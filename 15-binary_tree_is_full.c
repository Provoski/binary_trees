#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if s binary tree is full
 * @tree: pointer to root node
 * Return: 1 if tree is full or 0 if tree is NULL not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->left));
	return (0);	
}
