#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 90);
	root->left->left = binary_tree_node(root->left, 80);
	root->left->left->left = binary_tree_node(root->left->left, 70);
	root->left->left->right = binary_tree_node(root->left->left, 85);

	binary_tree_print(root);

	printf("Rotate-right %d\n", root->n);
	root = binary_tree_rotate_right(root);
	binary_tree_print(root);
	return (0);
}
