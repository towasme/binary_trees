#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - check the balance factor
 * @tree: pointer to tree root
 * Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int result, Left_Height, Right_Height;

	if (!tree)
	{return (0); }

	if (tree->left)
	{Left_Height = binary_tree_height(tree->left) + 1; }
	else
	{Left_Height = binary_tree_height(tree->left) + 0; }

	if (tree->right)
	{Right_Height = binary_tree_height(tree->right) + 1; }
	else
	{Right_Height = binary_tree_height(tree->right) + 0; }

	result = Left_Height - Right_Height;
	return (result);
}
