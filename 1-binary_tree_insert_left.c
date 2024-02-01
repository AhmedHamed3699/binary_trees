#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a new node to left
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Return: pointer to new node, NULL on faliure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
