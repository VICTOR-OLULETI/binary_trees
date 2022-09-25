#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode, *current;

	if (parent == NULL)
		return (NULL);
	tempNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	current = parent;
	while (1)
	{
		current = current->left;
		if (current == NULL)
		{
			parent->left = tempNode;
			return (tempNode);
		}
		else
		{
			parent->left = tempNode;
			current->parent = tempNode;
			tempNode->left = current;
			return (tempNode);
		}
	}
}
