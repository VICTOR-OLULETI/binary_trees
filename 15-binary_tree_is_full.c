#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;

	if (root == NULL)
		return (0);
	if (root->parent == NULL)
		return (0);
	if ((root->left != NULL && root->right != NULL) ||
			(root->left == NULL && root->right == NULL))
	{
		return (1);
	}
	return (0);
}
