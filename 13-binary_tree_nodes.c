#includes "binary_trees.h"
/**
 * binary_tree_nodes - function for counting nodes with atleast a child
 * @tree: pointer to a tree
 * Return: number of nodes with atleast a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
