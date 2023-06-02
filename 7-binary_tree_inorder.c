#include "binary_trees.h"
/**
 * binary_tree_inorder - Function for travesing a tree through in-order
 * @tree: pointer to the tree to be traversed
 * @func: pointer to the function for traversing the tree
 * Return: the function returns nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right,func);
}
