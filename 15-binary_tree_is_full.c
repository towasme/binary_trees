#include "binary_trees.h"
/**
* * binary_tree_is_full - looks for the depth of the tree
* @tree: pointer to the node
* Return: On success 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    if (!tree->left && !tree->right)
        return (1);

    if ((tree->right) && (tree->left))
        return (binary_tree_is_full(tree->left) && (binary_tree_is_full(tree->right)));
    
    return (0);
}
