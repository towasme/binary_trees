#include "binary_trees.h"
/**
* * binary_tree_uncle - looks for the depth of the tree
* @node: pointer to the node
* Return: On success 1
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL
		||  node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	return (node->parent->parent->right);
}
