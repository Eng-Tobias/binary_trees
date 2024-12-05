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
return (a > b) ? a : b;
}
/**
* is_perfect_rec - Recursively checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
* @height: Height of the tree
* @level: Current level
*
* Return: 1 if the tree is perfect, 0 if not
*/
int is_perfect_rec(const binary_tree_t *tree, size_t height, size_t level)
{
if (tree == NULL)
return (0);
/* If it's a leaf node, check if it's at the last level */
if (tree->left == NULL && tree->right == NULL)
return (height == level + 1);
/* If it's an internal node but has one child, it's not perfect */
if (tree->left == NULL || tree->right == NULL)
return (0);
/* Recurse for both left and right children */
return (is_perfect_rec(tree->left, height, level + 1) &&
is_perfect_rec(tree->right, height, level + 1));
}
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
size_t height = binary_tree_height(tree);
return (is_perfect_rec(tree, height, 0));
}
