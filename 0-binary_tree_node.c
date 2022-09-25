#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;
	binary_tree_t *current;

	tempNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;
	if (parent == NULL)
	{
		parent = tempNode;
		return (tempNode);
	}
	else
	{
		current = parent;
		while (1)
		{
			if (value < parent->n)
			{
				current = current->left;
				/* insert to the left */
				if (current == NULL)
				{
					parent->left = tempNode;
					return (tempNode);
				}
			}
			else
			{
				current = current->right;
				/* insert to the right */
				if (current == NULL)
				{
					parent->right = tempNode;
					return (tempNode);
				}
			}
		}
	}
}
