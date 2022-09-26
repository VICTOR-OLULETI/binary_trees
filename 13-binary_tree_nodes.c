#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: count of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int n1, n2;

	if (root != NULL)
	{
		n1 = binary_tree_nodes(root->left);
		n2 = binary_tree_nodes(root->right);
		if (!(root->left == NULL && root->right == NULL))
			return (n1 + n2 + 1);
	}
	return (0);
}
