#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: uncle of node, otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tempNode = node, *parent1, *gparent;

	if (tempNode == NULL)
		return (NULL);
	if (tempNode->parent == NULL)
		return (NULL);

	parent1 = tempNode->parent;
	if (parent1 == NULL)
		return (NULL);
	gparent = parent1->parent;
	if (gparent == NULL)
		return (NULL);
	if (gparent->left == parent1)
		return (gparent->right);
	return (gparent->left);
}
