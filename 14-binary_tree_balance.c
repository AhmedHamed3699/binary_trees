#include "binary_trees.h"

/**
 * get_height - get tree height
 * @tree: pointer to tree root
 *
 * Return: height of the tree
 */
size_t get_height(const binary_tree_t *tree)
{
	int h1, h2;

	if (!tree)
		return (0);

	h1 = get_height(tree->left) + 1;
	h2 = get_height(tree->right) + 1;

	if (h1 > h2)
		return (h1);
	return (h2);
}

/**
 * binary_tree_balance - get balance factor
 * @tree: pointer to tree root
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_height(tree->left) - get_height(tree->right));
}
