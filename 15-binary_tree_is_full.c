#include "binary_trees.h"
/**
* * binary_tree_leaves - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (!tree->left && !tree->right)
    {
        return (1);
    }
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
* * binary_tree_is_full - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    size_t par = 0;

    if (tree == NULL)
        return (0);
    
    par = binary_tree_leaves(tree);
    if (par % 2)
        return (0);
    else
    {
        return (1);
    }   
}
