#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: size of tree else, 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);

	if (r_height > l_height)
		return (r_height);
	else
		return (l_height);
}
