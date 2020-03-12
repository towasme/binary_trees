#include "binary_trees.h"
/**
* * binary_tree_leaves - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	    return (0);

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
