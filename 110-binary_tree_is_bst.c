#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * isBSTUtil - helps to check for valid binary search tree.
 * @tree: pointer to the root node of the tree to check
 * @min: minimum value.
 * @max: maximum value.
 * Return: 1 if tree is a valid BST, otherwise 0.
 */
int isBSTUtil(binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (isBSTUtil(tree->left, min, tree->n - 1)
		&& isBSTUtil(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree.
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if a valid BST, otherwise 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *root = (binary_tree_t *)tree;

	if (root == NULL)
		return (0);
	return (isBSTUtil(root, INT_MIN, INT_MAX));
}
