#include "binary_trees.h"
int get_length(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: tree is NULL return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int length;

	length = get_length(tree);
	if (length & ((length + 1) == 0))
		return (1);
	else
		return (0);
}

/**
 * get_length - function that gets the length of the binary tree
 * @tree: pointer to the root node of the tree to count
 *
 * Return: length of the tree
 */
int get_length(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + get_length(tree->left) + get_length(tree->right));
}
