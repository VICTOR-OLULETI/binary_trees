#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: depth of a node in a binary tree
 */
size_t tree_depth(const binary_tree_t *tree)
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
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes,
 * otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *temp1 = (binary_tree_t *)first;
	binary_tree_t *temp2 = (binary_tree_t *)second;
	int h1, h2;

	if (temp1 == NULL || temp2 == NULL)
		return (NULL);
	h1 = tree_depth(temp1);
	h2 = tree_depth(temp2);
	while (h1 < h2)
	{
		temp2 = temp2->parent;
		if (temp2 == NULL)
			return (NULL);
		h2 = h2 - 1;
	}
	while (h1 > h2)
	{
		temp1 = temp1->parent;
		if (temp1 == NULL)
			return (NULL);
		h1 = h1 - 1;
	}
	if (h1 == h2)
	{
		while (temp1 != temp2)
		{
			if (temp1 != NULL && temp2 != NULL)
			{
				temp1 = temp1->parent;
				temp2 = temp2->parent;
			}
			else
				return (NULL);
		}
		if (temp1 == temp2)
			return (temp1);
	}
	return (NULL);
}
