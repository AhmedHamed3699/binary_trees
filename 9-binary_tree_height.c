#include "binary_trees.h"

/**
 * max - get max of two numbers
 * @n1: first number
 * @n2: second number
 *
 * Return: maximum of the two numbers
 */
int max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

/**
 * binary_tree_height - get tree height
 * @tree: pointer to tree root
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);

	return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) +
					1);
}
