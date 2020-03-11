#include "binary_trees.h"

/**
 *binary_tree_node - creates a bianry tree
 *@parent: The node to add to parent tree
 *@value: value the node will have
 *Return: On success 1.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return NULL;
    new->n = value;
    new->left = NULL;
    new->right = NULL;
    new->parent = parent;
    if (parent == NULL)
        {
            parent = new;
        }
    return (new);
}
