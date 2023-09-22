### Script descriptions
[0-binary_tree_node.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/0-binary_tree_node.c) - A function that creates a binary tree node where `parent` is a pointer to the parent node of the node to create and `value` is the value to put in the new node
- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

[1-binary_tree_insert_left.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/1-binary_tree_insert_left.c) - A function that inserts a node as the left-child of another node, where the `parent` is a pointer to the node to insert the left-child in, and `value` is the value to store in the new node.
- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parents, int value);`

[2-binary_tree_insert_right.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/2-binary_tree_insert_right.c) - A function that inserts a node as the right-child of another node, where `parent` is a pointer to the node to insert the right-child in and `value is the value to store in the new node.
- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`

[3-binary_tree_delete.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/3-binary_tree_delete.c) - A function that deletes an entire binary tree, where `tree` is a pointer to the root node of the tree to delete.
- Prototype: `void binary_tree_delete(binary_tree_t *tree);`

[4-binary_tree_is_leaf.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/4-binary_tree_is_leaf.c) - A function that checks if a node is a leaf, where `node` is a pointer to the node to check. 
- Protoype: `int binary_tree_is_leaf(const binary_tree_t *node);`

[5-binary_tree_is_root.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/5-binary_tree_is_root.c) - A function that checks if a given node is a root, where `node` is a pointer to the node to check. 
- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`

[6-binary_tree_preorder.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/6-binary_tree_preorder.c) - A function that goes through a binary tree using pre-order traversal, where `tree` is a pointer to the root node of the tree to traverse and `func` is a pointer to a function to call for each node.
- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

[7-binary_tree_inorder.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/7-binary_tree_inorder.c) - A function that goes through a binary tree using in-order traversal, where `tree` is a pointer to the root node of the tree to traverse, and `func` is a pointer to a function to call for each node. 
- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

[8-binary_tree_postorder.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/8-binary_tree_postorder.c) - A function that goes through a binary tree using post-order traversal where `tree` is a pointer to the root node of the tree to traverse and `func` is a pointer to a function to call for each node.
- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

[9-binary_tree_height.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/9-binary_tree_height.c) - A function that measures the height of a binary tree, where `tree` is a pointer to the root node of the tree to measure the height.
- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`

[10-binary_tree_depth.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/10-binary_tree_depth.c] - A function that measures the depth of a node in a binary tree, where `tree` is a pointer to the node to measure the depth. 
- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`

[11-binary_tree_size.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/11-binary_tree_size.c) - A function that measures the size of a binary tree, where `tree` is a pointer to the root node to measure the size.
- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`

[12-binary_tree_leaves.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/12-binary_tree_leaves.c) - A function that counts the leaves in a binary tree, where `tree` is a pointer to the root node of the tree to count the number of leaves.
- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`

[13-binary_tree_nodes.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/13-binary_tree_nodes.c) - A function that counts the nodes with a least 1 child in a binary tree, where `tree` is a pointer to the root node of the tree to count the number of nodes. 
- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`

[14-binary_tree_balance.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/14-binary_tree_balance.c) - A function that measures the balance factor of a binary tree, where `tree` is a pointer to the root node of the tree to measure the balance factor. 
- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`

[15-binary_tree_is_full.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/15-binary_tree_full.c] - A function that checks if a binary tree is full, where `tree` is a pointer to the root node of tree to check. 
- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`

[16-binary_tree_is_perfect.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/16-binary_tree_is_perfect.c) - A function that checks if a binary tree is perfect, where `tree` is a pointer to the root node of the tree to check. 
- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`

[17-binary_tree_sibling.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/17-binary_tree_sibling.c) - A function that finds the sibling of a node, where `node` is a pointer to the node to find the sibling.
- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`

[18-binary_tree_uncle.c](https://github.com/chelseyqc/holbertonschool-binary_trees/blob/master/18-binary_tree_uncle.c) - A function that finds the uncle of a node, where `node` is a pointer to the node to find the uncle.
- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
