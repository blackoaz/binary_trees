#include "binary_trees.h"
/**
 * binary_tree_node - function for creating binary tree node
 * @parent: pointer to the parent
 * @value: value to put the new node
 * Return: return a pointer to a node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t * newNode;
	newNode	= malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return NULL;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
