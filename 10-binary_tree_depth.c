#include "binary_trees.h"
/**
 * binary_tree_depth - function for calculating the depth of a node in subtree
 * @tree: tree to calculate subtree node depth
 * Return: returns depth of a node or 0 if tree is Null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
