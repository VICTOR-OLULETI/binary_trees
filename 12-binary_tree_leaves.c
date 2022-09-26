#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: leave counted
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int leaves = 0, l1, l2;

	if (root == NULL)
		return (0);

	if (root->left == NULL && root->right == NULL)
		return (leaves + 1);

	if (root != NULL)
	{
		l1 = binary_tree_leaves(root->left);
		l2 = binary_tree_leaves(root->right);
	}
	return (l1 + l2);
}
