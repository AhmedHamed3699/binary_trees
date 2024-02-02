#include "binary_trees.h"

/**
 * get_size - get tree size
 * @tree: pointer to tree root
 *
 * Return: size of the tree
 */
size_t get_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_size(tree->left) + get_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: pointer to tree root
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;

	if (!tree)
		return (0);

	size = get_size(tree);
	return (!((size + 1) & size));
}
