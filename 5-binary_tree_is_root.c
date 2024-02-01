#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is the root
 * @node: pointer to tree node
 *
 * Return: 1 if it is the root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
