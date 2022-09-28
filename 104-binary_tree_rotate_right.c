#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a left rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = tree, *a, *b, *p;

	if (root == NULL)
		return (NULL);
	p = root;
	a = root->left;
	if (a == NULL)
		return (NULL);
	b = a->right;
	p->parent = a;
	a->right = p;
	p->left = b;
	return (a);
}
