#include "binary_trees.h"
/**
*binary_tree_preorder - preorder
*@tree: pounter to root
*@func: function to call for each node.
*Return: On success 1.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);   
}