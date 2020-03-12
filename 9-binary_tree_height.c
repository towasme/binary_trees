#include "binary_trees.h"
/**
*binary_tree_height - preorder
*@tree: pounter to root
*Return: On success 1.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t maxdepth_l = 0, maxdepth_r = 0;

    if (tree == NULL)
        return (0);
    maxdepth_l = binary_tree_height(tree->left);
    maxdepth_r = binary_tree_height(tree->right);
    printf("L %zu", maxdepth_l);
    printf("L %zu", maxdepth_r);
    if (maxdepth_l > maxdepth_r)
    {
        maxdepth_l += 1;
        return (maxdepth_l);
    }
    else
    {
        maxdepth_r += 1;
        return (maxdepth_r);
    }
}