#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of a node
 * @node: pointer to node
 *
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node != node->parent->left)
		return (node->parent->left);
	return (node->parent->right);
}
