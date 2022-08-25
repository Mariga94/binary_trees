#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failer or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	else if (parent->left != NULL)
	{
		temp->n = parent->left->n;
		temp->parent = NULL;
		temp->left = parent->left->left;
		temp->right = parent->left->right;

		if (value < parent->n)
		{
			leftNode->n = value;
			leftNode->left = temp;
			leftNode->right = NULL;
			leftNode->parent = parent;
			parent->left = leftNode;
			temp->parent = leftNode;
		}

	}
	else
	{
		if (value < parent->n)
		{
			leftNode->n = value;
			leftNode->left = NULL;
			leftNode->right = NULL;
			leftNode->parent = parent;
			parent->left = leftNode;
		}
	}

	return (parent);
}
