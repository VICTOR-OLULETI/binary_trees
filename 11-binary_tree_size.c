#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	size_t h1, h2;

	if (root == NULL)
		return (0);

	h1 = binary_tree_size(root->left);
	h2 = binary_tree_size(root->right);
	return (h1 + h2 + 1);
}
