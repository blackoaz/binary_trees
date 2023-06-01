#include "binary_trees.h"
/**
 * binary_tree_is_root - function for checking if a binary tree is root
 * @node: the node to be checked
 * Return: returns an integer based on true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
