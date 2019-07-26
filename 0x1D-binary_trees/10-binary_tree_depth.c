#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure t
 * Return: 0 on failure, depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !(tree->parent)) 
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (1 + depth);
}	
