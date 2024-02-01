#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Return: pointer to new node, NULL on faliure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL, newNode->right = NULL;

	return (newNode);
}
