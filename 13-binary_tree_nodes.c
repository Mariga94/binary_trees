#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the node with at least 1 child
 * in a binary tree
 * @tree: pointer to the tree node of the tree to count the number of nodes
 *
 * Return: size of nodes else 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{

		if (tree->left || tree->right)
			size += 1;
		size += binary_tree_nodes(tree->left);
		size += binary_tree_nodes(tree->right);
	}

	return (size);
}
