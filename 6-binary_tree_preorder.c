#include "binary_trees.h"
/**
* binary_tree_preorder - Traverses a binary tree in pre-order
* @tree: Pointer to the root node of the tree
* @func: Pointer to the function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
/* Visit the node */
func(tree->n);
/* Recursively traverse the left subtree */
binary_tree_preorder(tree->left, func);
/* Recursively traverse the right subtree */
binary_tree_preorder(tree->right, func);
}
