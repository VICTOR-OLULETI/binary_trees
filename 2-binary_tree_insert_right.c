#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node or NULL on failure or parent is null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		current = current->right;
		if (current == NULL)
		{
			parent->right = tempNode;
			return (tempNode);
		}
		else
		{
			parent->right = tempNode;
			current->parent = tempNode;
			tempNode->right = current;
			return (tempNode);
		}
	}
}
