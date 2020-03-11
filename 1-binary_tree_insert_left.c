#include "binary_trees.h"
/**
 *binary_tree_insert - creates a bianry tree
 *@parent: The node to add to parent tree
 *@value: value the node will have
 *Return: On success 1.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_left;

    if (parent == NULL)
        return (NULL);
    new_left = malloc(sizeof(binary_tree_t));
    if (new_left == NULL)
        return (NULL);
    
    new_left->n = value;
    new_left->left = NULL;
    new_left->right = NULL;
    new_left->parent = parent;
    if (parent->left != NULL)
    {
        new_left->left = parent->left;
        parent->left = new_left;
        new_left->left->parent = new_left;
    }
    else
    {
        parent->left = new_left;
    }
    return (new_left);
}
