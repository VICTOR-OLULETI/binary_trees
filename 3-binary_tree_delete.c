#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: void.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root;

	root = tree;
	if (root != NULL)
	{
		binary_tree_delete(root->left);
		binary_tree_delete(root->right);
		free(root);
	}
}
