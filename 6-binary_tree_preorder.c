#include "binary_trees.h"
/**
 * binary_tree_preorder - function for traversing a tree in pre-order
 * @tree: the pointer tree to be traversed
 * @func:pointer to func for calling each node
 * Return: returns nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
