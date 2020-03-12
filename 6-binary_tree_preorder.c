#include "binary_trees.h"
/**
 *binary_tree_preorder - preorder
 *@tree: pointer to root
 *@func: function to call in the node
 *Return: On success 1
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
