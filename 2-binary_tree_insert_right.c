#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a new node to right
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Return: pointer to new node, NULL on faliure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
