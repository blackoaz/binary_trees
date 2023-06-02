#include "binary_trees.h"
/**
 * binary_tree_height - function for calculating height of a tree
 * @tree: the tree for height to be calculated
 * Return: returns a size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_subTree = binary_tree_height(tree->left);
	size_t right_subTree = binary_tree_height(tree->right);

	return 1 + (left_subTree > right_subTree ? left_subTree : right_subTree);
}
