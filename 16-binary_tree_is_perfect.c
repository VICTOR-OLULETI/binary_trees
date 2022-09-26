#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "binary_trees.h"

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size
 */
size_t tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	size_t h1, h2;

	if (root == NULL)
		return (0);

	h1 = tree_size(root->left);
	h2 = tree_size(root->right);
	return (h1 + h2 + 1);
}
/**
 * tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: value of the height
 */
size_t tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int h1, h2;

	if (root != NULL)
	{
		h1 = tree_height(root->left);
		h2 = tree_height(root->right);
		if (h1 >= h2)
			return (h1 + 1);
		return (h2 + 1);
	}
	return (0);
}
/**
 * power - calculates the x ^ y
 * @base: base of number
 * @exp: power to be raised by
 *
 * Return: value.
 */
int power(int base, int exp)
{
	int result = 1;

	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}
/**
 * binary_tree_is_perfect - checks if a binary is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int p, h, nodes;

	if (root == NULL)
		return (0);

	h = tree_height(root);
	nodes = tree_size(root);
	p = power(2, (h)) - 1;
	if (p == nodes)
		return (1);
	return (0);
}
