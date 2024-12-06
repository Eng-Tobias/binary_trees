# Binary Trees

This project implements various functions to work with binary trees, a fundamental data structure in computer science. The goal of this project is to practice and reinforce knowledge of tree structures and operations in C programming.

## Project Description

This project includes a series of tasks that focus on creating, manipulating, and traversing binary trees. Each task provides a specific problem that demonstrates how to handle binary trees, from creating nodes to checking the properties of trees, such as perfectness and balance.

## Tasks

The project is divided into multiple tasks, each solving a different problem related to binary trees. The following are the tasks included in this project:

### Task 0: Binary Tree Node Creation  
- **File**: `0-binary_tree_node.c`  
- **Description**: Write a function that creates a binary tree node.  
- **Prototype**: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

### Task 1: Binary Tree Traversal  
- **File**: `1-binary_tree_print.c`  
- **Description**: Implement a function to traverse a binary tree and print its nodes in a specific order.  
- **Prototype**: `void binary_tree_print(const binary_tree_t *tree);`

### Task 2: Height of a Binary Tree  
- **File**: `2-binary_tree_height.c`  
- **Description**: Write a function to measure the height of a binary tree.  
- **Prototype**: `size_t binary_tree_height(const binary_tree_t *tree);`

### Task 3: Depth of a Node  
- **File**: `3-binary_tree_depth.c`  
- **Description**: Implement a function to find the depth of a specific node in the tree.  
- **Prototype**: `size_t binary_tree_depth(const binary_tree_t *tree);`

### Task 4: Size of a Binary Tree  
- **File**: `4-binary_tree_size.c`  
- **Description**: Write a function to calculate the total number of nodes in a binary tree.  
- **Prototype**: `size_t binary_tree_size(const binary_tree_t *tree);`

### Task 5: Check if the Binary Tree is Perfect  
- **File**: `5-binary_tree_is_perfect.c`  
- **Description**: Implement a function to check if a binary tree is perfect, meaning all leaf nodes are at the same level, and every parent has two children.  
- **Prototype**: `int binary_tree_is_perfect(const binary_tree_t *tree);`

### Task 6: Check if the Binary Tree is Balanced  
- **File**: `6-binary_tree_is_balanced.c`  
- **Description**: Write a function to check if a binary tree is balanced, where the height of the left and right subtrees differ by no more than one.  
- **Prototype**: `int binary_tree_is_balanced(const binary_tree_t *tree);`

### Task 7: Check if the Binary Tree is Full  
- **File**: `7-binary_tree_is_full.c`  
- **Description**: Implement a function to check if the binary tree is full, meaning every node has either two children or none.  
- **Prototype**: `int binary_tree_is_full(const binary_tree_t *tree);`

### Task 8: Find the Sibling of a Node  
- **File**: `8-binary_tree_sibling.c`  
- **Description**: Write a function that finds the sibling of a node in a binary tree.  
- **Prototype**: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`

### Task 9: Find the Uncle of a Node  
- **File**: `9-binary_tree_uncle.c`  
- **Description**: Implement a function to find the uncle of a node in a binary tree.  
- **Prototype**: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`

### Task 10: Print the Ancestors of a Node  
- **File**: `10-binary_tree_ancestor.c`  
- **Description**: Write a function that prints all the ancestors of a node in a binary tree.  
- **Prototype**: `int binary_tree_ancestors(binary_tree_t *node);`

### Task 11: Binary Tree Nodes with a Single Child  
- **File**: `11-binary_tree_singly.c`  
- **Description**: Implement a function that counts the number of nodes with only one child in a binary tree.  
- **Prototype**: `size_t binary_tree_singly(const binary_tree_t *tree);`

### Task 12: Binary Tree Leaves  
- **File**: `12-binary_tree_leaves.c`  
- **Description**: Write a function to count the leaves in a binary tree.  
- **Prototype**: `size_t binary_tree_leaves(const binary_tree_t *tree);`

### Task 13: Pre-order Traversal  
- **File**: `13-binary_tree_preorder.c`  
- **Description**: Implement a function that performs pre-order traversal of a binary tree.  
- **Prototype**: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

### Task 14: In-order Traversal  
- **File**: `14-binary_tree_inorder.c`  
- **Description**: Write a function that performs in-order traversal of a binary tree.  
- **Prototype**: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

### Task 15: Post-order Traversal  
- **File**: `15-binary_tree_postorder.c`  
- **Description**: Implement a function that performs post-order traversal of a binary tree.  
- **Prototype**: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

### Task 16: Find the Lowest Common Ancestor  
- **File**: `16-binary_tree_lca.c`  
- **Description**: Write a function to find the lowest common ancestor (LCA) of two nodes in a binary tree.  
- **Prototype**: `binary_tree_t *binary_tree_lca(const binary_tree_t *tree, const binary_tree_t *node1, const binary_tree_t *node2);`

### Task 17: Check if the Binary Tree is Symmetric  
- **File**: `17-binary_tree_is_symmetric.c`  
- **Description**: Implement a function to check if a binary tree is symmetric around its center.  
- **Prototype**: `int binary_tree_is_symmetric(const binary_tree_t *tree);`

### Task 18: Binary Tree Maximum Depth  
- **File**: `18-binary_tree_max_depth.c`  
- **Description**: Write a function to calculate the maximum depth of a binary tree.  
- **Prototype**: `size_t binary_tree_max_depth(const binary_tree_t *tree);`

## Compilation

To compile the project, you can use the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c [TASK_FILES] -o [OUTPUT_FILE]

