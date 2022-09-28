#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "binary_trees.h"

/**
 * createQueue - creates a Queue
 * @front: from beginning
 * @rear: from the end.
 *
 * Return: created Queue
 */

binary_tree_t **createQueue(int *front, int *rear)
{
	binary_tree_t **queue;

	queue = (binary_tree_t **)malloc(sizeof(binary_tree_t *) * 100);
	*front = *rear = 0;
	return (queue);
}

/**
 * enQueue - adds element to the created queue
 * @queue: queue created
 * @rear: pointer from the end
 * @new_node: new node added to the queue
 *
 * Return: void.
 */
void enQueue(binary_tree_t **queue, int *rear, binary_tree_t *new_node)
{
	queue[*rear] = new_node;
	(*rear)++;
}

/**
 * deQueue - retrieves a node
 * @queue: queue to retrieve node from
 * @front: starting index used to retrieve node
 *
 * Return: node retrieved from array
 */

binary_tree_t *deQueue(binary_tree_t **queue, int *front)
{
	(*front)++;
	return (queue[*front - 1]);
}
/**
 * isQueueEmpty - checks if queue is empty
 * @front: starting index pointer
 * @rear: rear index pointer
 *
 * Return: true or false
 */

bool isQueueEmpty(int *front, int *rear)
{
	return (*rear == *front);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if complete, otherwise 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *root = (binary_tree_t *)tree, *tempNode;
	binary_tree_t **queue;
	int rear, front;
	bool flag = false;

	if (root == NULL)
		return (1);
	queue = createQueue(&front, &rear);
	if (queue == NULL)
	{	free(queue);
		return (0);
	}
	enQueue(queue, &rear, root);
	while (!isQueueEmpty(&front, &rear))
	{
		tempNode = deQueue(queue, &front);
		if (tempNode->left)
		{
			if (flag == true)
			{	free(queue);
				return (0);
			}
			enQueue(queue, &rear, tempNode->left);
		}
		else
			flag = true;
		if (tempNode->right)
		{
			if (flag == true)
			{
				free(queue);
				return (0);
			}
			enQueue(queue, &rear, tempNode->right);
		}
		else
			flag = true;
	}
	free(queue);
	return (1);
}
