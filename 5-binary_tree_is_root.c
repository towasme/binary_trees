#include "binary_trees.h"
/**
 *binary_tree_is_leaf - creates a bianry tree
 *@node: checks this node if its a leaf
 *Return: On success 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
