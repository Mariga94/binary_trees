#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
