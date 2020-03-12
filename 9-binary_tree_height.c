#include "binary_trees.h"
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