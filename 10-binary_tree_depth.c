#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *root;
	size_t depth = 0;

	root = tree;
	if (root == NULL)
		return (0);

	while (root->parent != NULL)
	{
		depth += 1;
		root = root->parent;
	}
	return (depth);
}
