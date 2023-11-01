### Binary Trees

Task 0: This function allocates memory for a new node of type binary_tree_t, assigns the value to the n member, and sets the parent, left, and right pointers. If memory allocation fails, it returns NULL. Otherwise, it returns a pointer to the new node. This function can be used to create a binary tree as shown in your provided main function. The main function creates a binary tree and then prints it using the binary_tree_print function. The output is a visual representation of the tree structure.

Task 1: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a left child, it sets the old left child as the left child of the new node and updates its parent pointer. Finally, it sets the new node as the left child of the parent.

Task 2: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a right child, it sets the old right child as the right child of the new node and updates its parent pointer. Finally, it sets the new node as the right child of the parent.

Task 3: This function uses a post-order traversal to delete all nodes in the tree. It first checks if the tree is NULL. If it is, it returns without doing anything. Then it recursively deletes the left and right subtrees of the current node. Finally, it frees the memory of the current node.

Task 4: This function first checks if the node is NULL. If it is, it returns 0. Then it checks if both the left and right child of the node are NULL. If they are, it means the node is a leaf, so it returns 1. Otherwise, it returns 0.

Task 5: This function first checks if the node is NULL. If it is, it returns 0. Then it checks if the parent of the node is NULL. If it is, it means the node is a root, so it returns 1. Otherwise, it returns 0.

Task 6: This function first checks if the tree or func is NULL. If either is, it returns without doing anything. Then it calls the function func with the value of the current node. After that, it recursively traverses the left and right subtrees of the current node.

Task 7: This function first checks if the tree or func is NULL. If either is, it returns without doing anything. Then it recursively traverses the left subtree of the current node, calls the function func with the value of the current node, and finally recursively traverses the right subtree of the current node.
