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

/**
*binary_tree_height - preorder
*@tree: pounter to root
*Return: On success 1
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t maxdepth_l = 0, maxdepth_r = 0;    if (tree == NULL)
return (0);
if (tree->left)
maxdepth_l = (1 + binary_tree_height(tree->left));
if (tree->right)
maxdepth_r = (1 + binary_tree_height(tree->right));
if (maxdepth_l > maxdepth_r)
{
return (maxdepth_l);
}
else
{
return (maxdepth_r);
}
}

/**
*binary_tree_is_perfect - looks for a pefect tree
*@tree: pounter to root
*Return: On success 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, max_n = 0, x, size = 0, v = 2;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	for (x = 1; x < (height + 1); x++)
	{
		v *= 2;
	}
	max_n = (v - 1);

	if (size == max_n || height == 0)
		return (1);
	return (0);
}

