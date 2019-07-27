#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (!node || !node->parent)
		return (NULL);
	temp = node->parent->parent;
	if (temp->left == node->parent)
		return (temp->right);
	else
		return (temp->left);
}
