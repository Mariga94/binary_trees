#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return:int else if tree is NULL return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left) == NULL && (tree->right) == NULL)
	{
		return (1);
	}
	if ((tree->left) && (tree->right))
	{
		count = (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));

	}
	return (count);
}
