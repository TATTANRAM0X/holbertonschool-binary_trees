#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: New node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}

