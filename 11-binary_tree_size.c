#include "binary_trees.h"
/**
 * binary_tree_size - funcion for measuring size of a binary tree
 * @tree: tree whose height to be calculated
 * Return: returns size of the tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	size_t left_side = binary_tree_size(tree->left);
	size_t right_side = binary_tree_size(tree->right);

	return (1 + left_side + right_side);
}
