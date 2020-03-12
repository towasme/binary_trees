#include "binary_trees.h"
/**
* * binary_tree_size - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t max_size_l = 0, max_size_r = 0, max_size = 0;

	if (tree == NULL)
	return (0);

	if (tree->left)
		max_size_l = binary_tree_size(tree->left);
	if (tree->right)
		max_size_r = binary_tree_size(tree->right);
	max_size = (max_size_l + max_size_r + 1);
	return (max_size);
}
