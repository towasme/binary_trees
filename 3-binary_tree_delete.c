#include "binary_trees.h"
/**
 *binary_tree_delete - creates a bianry tree
 *@tree: binary tree to delete
 *Return: On success 1.
 */
void binary_tree_delete(binary_tree_t *tree)
{
        if (tree == NULL)
                return;
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
}