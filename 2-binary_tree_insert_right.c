#include "binary_trees.h"
/**
 *binary_tree_insert - creates a bianry tree
 *@parent: The node to add to parent tree
 *@value: value the node will have
 *Return: On success 1.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_right;

    if (parent == NULL)
        return (NULL);
    new_right = malloc(sizeof(binary_tree_t));
    if (new_right == NULL)
        return (NULL);
    
    new_right->n = value;
    new_right->left = NULL;
    new_right->right = NULL;
    new_right->parent = parent;
    if (parent->right != NULL)
    {
        new_right->right = parent->right;
        parent->right = new_right;
        new_right->right->parent = new_right;
    }
    else
    {
        parent->right = new_right;
    }
    return (new_right);
}
