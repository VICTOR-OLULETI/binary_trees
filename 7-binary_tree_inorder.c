#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node,
 * the value of each node is passed as a parameter to this function
 *
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *root;

	root = tree;
	if (root != NULL)
	{
		binary_tree_inorder(root->left, (*func));
		if (*func != NULL)
			(*func)(root->n);
		binary_tree_inorder(root->right, (*func));
	}
}
