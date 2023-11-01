### Binary Trees

Task 0: This function allocates memory for a new node of type binary_tree_t, assigns the value to the n member, and sets the parent, left, and right pointers. If memory allocation fails, it returns NULL. Otherwise, it returns a pointer to the new node. This function can be used to create a binary tree as shown in your provided main function. The main function creates a binary tree and then prints it using the binary_tree_print function. The output is a visual representation of the tree structure.

Task 1: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a left child, it sets the old left child as the left child of the new node and updates its parent pointer. Finally, it sets the new node as the left child of the parent.

Task 2: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a right child, it sets the old right child as the right child of the new node and updates its parent pointer. Finally, it sets the new node as the right child of the parent.
