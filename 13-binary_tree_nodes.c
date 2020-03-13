#include "binary_trees.h"
/**
* * binary_tree_nodes - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}

