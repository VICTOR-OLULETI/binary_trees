#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-ordertraversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 * the value in the node is passed as a parameter to this function.
 *
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *root = tree;

	if (root != NULL)
	{
		binary_tree_postorder(root->left, (*func));
		binary_tree_postorder(root->right, (*func));
		if (*func != NULL)
			(*func)(root->n);
	}
}
