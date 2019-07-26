#include "binary_trees.h"

/**
 * binary_tree_delete - delets an entire binary tree
 * @tree: pointer to root node of the tree
 * Return: pointer to the new node, or NULL on failure
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
