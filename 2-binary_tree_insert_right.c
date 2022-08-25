#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	else if (parent->right != NULL)
	{
		temp->n = parent->right->n;
		temp->parent = NULL;
		temp->left = parent->right->left;
		temp->right = parent->right->right;

		if (value > parent->n)
		{
			rightNode->n = value;
			rightNode->left = NULL;
			rightNode->right = temp;
			rightNode->parent = parent;
			parent->right = rightNode;
			temp->parent = rightNode;
		}
	}
	else
	{
		if (value > parent->n)
		{
			rightNode->n = value;
			rightNode->left = NULL;
			rightNode->right = NULL;
			rightNode->parent = parent;
			parent->right = rightNode;
		}
	}
	return (parent);
}
