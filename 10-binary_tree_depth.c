#include "binary_trees.h"

/**
 * binary_tree_depth - get the depth of a node
 * @tree: pointer to tree root
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
