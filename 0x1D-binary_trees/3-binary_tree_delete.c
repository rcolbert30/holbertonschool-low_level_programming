#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
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
