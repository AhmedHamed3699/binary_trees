#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes not leaves
 * @tree: pointer to tree root
 *
 * Return: nubmer of leaves in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
