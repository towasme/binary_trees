#include "binary_trees.h"
/**
* * binary_tree_sibling - looks for the depth of the tree
* @node: pointer to the node
* Return: On success 1
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if ((!node) || (!node->parent) || (!node->parent->left) 
        || (!node->parent->right))
            return (NULL);
    else
    {
        if (node->parent->left->n == node->n)
        {
            return (node->parent->right);
        }
        else
        {
            return (node->parent->left);
        }
    }
    
}