#include "binary_trees.h"

/**
 * binary_tree_sibling - function for checking siblings in a tree
 * @node: Pointer to the node for finding siblings
 * Return: returns pointer to a tree or Null for empty
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
