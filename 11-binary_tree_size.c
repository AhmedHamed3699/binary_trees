#include "binary_trees.h"

/**
 * binary_tree_size - get tree size
 * @tree: pointer to tree root
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
