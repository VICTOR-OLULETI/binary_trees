#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: value of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	size_t h1 = 0, h2 = 0;

	if (root != NULL)
	{
		if (root->parent == NULL)
		{
			h1 += 1;
			h2 += 1;
		}
		if (root->left != NULL)
		{
			binary_tree_height(root->left);
			h1 += 1;
		}
		if (root->right != NULL)
		{
			binary_tree_height(root->right);
			h2 += 1;
		}
	}
	if (h1 > h2)
		return (h1);
	return (h2);
}
