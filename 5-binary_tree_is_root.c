#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node
 * is a root
 * @node: pointer to node to check
 *
 * Return: 1 if node is root, otherwise 0.
 * if node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		if (node->left == NULL || node->left != NULL)
		return (1);
		else if (node->right == NULL || node->right != NULL)
			return (1);
	}
	return (0);
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);
}
