#include "binary_trees.h"
/**
 * binary_tree_insert_left - function for inserting a left node to a tree
 * @parent: pointer to the parent
 * @value: value to put the new node
 * Return: return a pointer to a node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
