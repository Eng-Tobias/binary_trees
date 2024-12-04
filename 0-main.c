#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point for testing
 *
 * Return: Always 0
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    if (root)
    {
        binary_tree_print(root);
        free(root);
    }

    return (0);
}
