#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - delete a node
 * @tree: pointer to tree root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
