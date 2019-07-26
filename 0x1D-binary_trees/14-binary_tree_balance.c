#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree
 * Return: balance factor, 0 if NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = (binary_tree_balance(tree->left));
	if (!tree->left)
		lh -= 1;

	rh = (binary_tree_balance(tree->right));
	if (!tree->right)
		rh -= 1;

	return (lh - rh);
}
