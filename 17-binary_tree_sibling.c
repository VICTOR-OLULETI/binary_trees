#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling.
 *
 * Return: sibling of the node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tempNode = node, *parent;

	if (tempNode == NULL)
		return (NULL);
	if (tempNode->parent == NULL)
		return (NULL);

	parent = tempNode->parent;
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
	return (NULL);
}
