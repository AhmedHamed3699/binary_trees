#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf
 * @node: pointer to tree node
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
