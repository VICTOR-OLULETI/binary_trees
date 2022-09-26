#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 * Return: void.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *root;
	/*void (*func)(int) = &print_num;*/

	root = tree;
	if (root != NULL)
	{
		if (*func != NULL)
			(*func)(root->n);
		binary_tree_preorder(root->left, (*func));
		binary_tree_preorder(root->right, (*func));
	}
}
