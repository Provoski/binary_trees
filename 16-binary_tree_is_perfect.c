#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to root node
 * Return: height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
		return (right_height + 1);
}

/**
 * count - count number of nodes
 * @tree: root node
 * Return: number pf nodes or 0 if tree is Null
 */
int count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + count(tree->left) + count(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: height of tree or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_height;
	int max_node;
	int actual_node;

	tree_height = binary_tree_height(tree);
	max_node = (1 << tree_height) - 1;
	actual_node = count(tree);
	return (actual_node == max_node);
}
