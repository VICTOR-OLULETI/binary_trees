#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size
 */
size_t tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	size_t h1, h2;

	if (root == NULL)
		return (0);

	h1 = tree_size(root->left);
	h2 = tree_size(root->right);
	return (h1 + h2 + 1);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int h1;

	if (root == NULL)
		return (0);
	if (root != NULL)
	{
		h1 = tree_size(root);
		if (h1 % 2 != 0)
			return (1);
	}
	return (0);
}
