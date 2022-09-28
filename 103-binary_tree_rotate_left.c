#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = tree, *a, *b, *p;

	if (root == NULL)
		return (NULL);
	p = root;
	a = root->right;
	if (a == NULL)
		return (NULL);
	b = a->left;
	a->left = p;
	p->parent = a;
	p->right = b;
	return (a);
}
