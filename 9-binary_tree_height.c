#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: size of tree else, 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{

	size_t l_h = 0;
	size_t r_h = 0;

	if (tree->left)
		l_h = 1 + binary_tree_height(tree->left);
	else if (tree->right)
		r_h = 1 + binary_tree_height(tree->right);

	if (r_h > l_h)
		return (r_h);
	else
		return (l_h);

	}
	return (0);
}
