#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: value of the height
 */
size_t tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int h1, h2;

	if (root != NULL)
	{
		h1 = tree_height(root->left);
		h2 = tree_height(root->right);
		if (h1 >= h2)
			return (h1 + 1);
		return (h2 + 1);
	}
	return (0);
}
/**
 * binary_print_level - prints node at specified level
 * @tree: pointer to root node of the tree to check
 * @level: level of node in the binary tree
 * @func: function to print the data stored in the node
 * Return: void.
 */

void binary_print_level(binary_tree_t *tree, void (*func)(int), int level)
{
	binary_tree_t *root = tree;

	if (root == NULL)
		return;
	if (level == 1)
	{
		(*func)(root->n);
	}
	else
	{
		binary_print_level(root->left, (*func), level - 1);
		binary_print_level(root->right, (*func), level - 1);
	}
}
/**
 * binary_tree_levelorder - using level order traversal through a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 * Return: void.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *root = (binary_tree_t *)tree;
	int h, i;

	if (root == NULL)
		return;

	h = tree_height(root);
	for (i = 0; i <= h; i++)
	{
		binary_print_level(root, (*func), i);
	}
}
