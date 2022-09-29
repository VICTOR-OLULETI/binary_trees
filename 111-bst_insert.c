#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value to store in the node to be inserted.
 *
 * Return: a pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root = *tree, *temp = NULL;
	bst_t *new_node;

	while (root != NULL)
	{
		temp = root;
		if (value < (root)->n)
			root = (root)->left;
		else
			root = (root)->right;
	}
	new_node = binary_tree_node(temp, value);
	return (new_node);
}
