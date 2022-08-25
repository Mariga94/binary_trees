#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int l_height;
	int r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_depth(tree->left);
	r_height = binary_tree_depth(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
