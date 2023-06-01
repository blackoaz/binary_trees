#include "binary_trees.h"
/**
 * binary_tree_delete - function for deleting an entire tree
 * @tree: the tree to be delete
 * Return: returns a void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);

}
