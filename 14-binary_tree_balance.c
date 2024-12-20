#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: The height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + (max(binary_tree_height(tree->left), binary_tree_height(tree->right))));
}
/**
* max - Returns the larger of two numbers
* @a: First number
* @b: Second number
*
* Return: The larger of the two numbers
*/
size_t max(size_t a, size_t b)
{
return ((a > b) ? a : b);
}
/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor
*
* Return: The balance factor, 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
