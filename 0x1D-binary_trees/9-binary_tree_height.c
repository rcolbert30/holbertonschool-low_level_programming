#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: size, 0 on failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = NULL, rh = NULL;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh > rh)
		return (1 + lh);
	
	return (1 + rh);
}
