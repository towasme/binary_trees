#include "binary_trees.h"
/**
*binary_tree_depth - looks for the depth of the tree
*@tree: pointer to the node
*Return: On success 1
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t maxdepth_l = 0, maxdepth_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		maxdepth_l = (1 + binary_tree_depth(tree->parent));
	if (tree->parent)
		maxdepth_r = (1 + binary_tree_depth(tree->parent));
	if (maxdepth_l > maxdepth_r)
	{
		return (maxdepth_l);
	}
	else
	{
		return (maxdepth_r);
	}
}
