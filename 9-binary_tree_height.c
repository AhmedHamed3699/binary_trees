#include "binary_trees.h"

/**
 * binary_tree_height - get tree height
 * @tree: pointer to tree root
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h1, h2;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	h1 = binary_tree_height(tree->left) + 1;
	h2 = binary_tree_height(tree->right) + 1;

	if (h1 > h2)
		return (h1);
	return (h2);
}
