#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
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
	int h1, h2;
	static int x;

	if (root != NULL)
	{
		x = -1;
		h1 = binary_tree_height(root->left);
		h2 = binary_tree_height(root->right);
		if (h1 >= h2)
			return (h1 + 1);
		return (h2 + 1);
	}
	return (x);

}
