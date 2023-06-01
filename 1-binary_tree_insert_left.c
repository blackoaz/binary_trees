#include "binary_trees.h"
/**
 * binary_tree_insert_left - function for inserting a left node to a tree
 * @parent: pointer to the parent
 * @value: value to put the new node
 * Return: return a pointer to a node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	binary_tree_t *current_left = parent->left;

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = current_left;
	newNode->right = NULL;
	if (current_left != NULL)
	{
		current_left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
