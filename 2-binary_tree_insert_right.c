#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
* @parent: Pointer to the parent node
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

/* Create a new node */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

/* If parent already has a right child, handle reattachment */
new_node->right = parent->right;
if (parent->right != NULL)
parent->right->parent = new_node;

/* Attach the new node as the parent's right child */
parent->right = new_node;

return (new_node);
}
