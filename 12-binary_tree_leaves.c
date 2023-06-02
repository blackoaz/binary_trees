#include "binary_trees.h"
/**
 * binary_tree_leaves - function for calculating leaves
 * @tree: tree to be traversed
 * Return: returns the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	size_t left_side = binary_tree_leaves(tree->left);
	size_t right_side = binary_tree_leaves(tree->right);

	return (left_side + right_side);
}
