#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree)
    {
        binary_tree_print(tree->right);
        printf("%d\n", tree->n);
        binary_tree_print(tree->left);
    }
}
