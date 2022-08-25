#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: if tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	printf("Deleting node: %d\n", tree->n);
	free(tree);
}
/**
 * _binary_tree_delete - deletes a tree and sets the root as NULL
 * @tree: pointer to pointer to tree
 * Return: nothing
 */
void _binary_tree_delete(binary_tree_t **tree)
{
	binary_tree_delete(*tree);
	*tree = NULL;
}
