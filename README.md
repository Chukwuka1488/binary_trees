### Binary Trees

Task 0: This function allocates memory for a new node of type binary_tree_t, assigns the value to the n member, and sets the parent, left, and right pointers. If memory allocation fails, it returns NULL. Otherwise, it returns a pointer to the new node. This function can be used to create a binary tree as shown in your provided main function. The main function creates a binary tree and then prints it using the binary_tree_print function. The output is a visual representation of the tree structure.

Task 1: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a left child, it sets the old left child as the left child of the new node and updates its parent pointer. Finally, it sets the new node as the left child of the parent.

Task 2: This function first checks if the parent is NULL. If it is, it returns NULL. Then it creates a new node with the given value and parent. If the creation of the new node fails, it returns NULL. If the parent already has a right child, it sets the old right child as the right child of the new node and updates its parent pointer. Finally, it sets the new node as the right child of the parent.

Task 3: This function uses a post-order traversal to delete all nodes in the tree. It first checks if the tree is NULL. If it is, it returns without doing anything. Then it recursively deletes the left and right subtrees of the current node. Finally, it frees the memory of the current node.

Task 4: This function first checks if the node is NULL. If it is, it returns 0. Then it checks if both the left and right child of the node are NULL. If they are, it means the node is a leaf, so it returns 1. Otherwise, it returns 0.

Task 5: This function first checks if the node is NULL. If it is, it returns 0. Then it checks if the parent of the node is NULL. If it is, it means the node is a root, so it returns 1. Otherwise, it returns 0.

Task 6: This function first checks if the tree or func is NULL. If either is, it returns without doing anything. Then it calls the function func with the value of the current node. After that, it recursively traverses the left and right subtrees of the current node.

Task 7: This function first checks if the tree or func is NULL. If either is, it returns without doing anything. Then it recursively traverses the left subtree of the current node, calls the function func with the value of the current node, and finally recursively traverses the right subtree of the current node.

Task 8: This function first checks if the tree or func is NULL. If either is, it returns without doing anything. Then it recursively traverses the left and right subtrees of the current node, and finally calls the function func with the value of the current node.

Task 9: This function first checks if the tree is NULL. If it is, it returns 0. Then it recursively calculates the heights of the left and right subtrees of the current node and adds 1 to each. It returns the larger of the two heights.

Task 10: This function first checks if the tree is NULL. If it is, it returns 0. Then it enters a while loop that continues as long as the parent of the current node is not NULL. In each iteration of the loop, it increments the depth and moves up to the parent of the current node. When it reaches a node with no parent (i.e., the root), it exits the loop and returns the depth.

Task 11: This function first checks if the tree is NULL. If it is, it returns 0. Then it recursively calculates the sizes of the left and right subtrees of the current node and adds 1 for the current node. It returns the sum of these sizes, which gives the total size of the tree.

Task 12: This function first checks if the tree is NULL. If it is, it returns 0. Then it checks if both the left and right child of the node are NULL. If they are, it means the node is a leaf, so it returns 1. Otherwise, it recursively counts the leaves in the left and right subtrees of the current node and returns the sum of these counts.

Task 13: This function first checks if the tree is NULL. If it is, it returns 0. Then it checks if either the left or right child of the node is not NULL. If either is, it means the node has at least one child, so it returns 1 plus the number of nodes in its left and right subtrees. Otherwise, it returns 0.

Task 14: This code includes two functions. The binary_tree_height function measures the height of a binary tree. It first checks if the tree is NULL. If it is, it returns 0. Then it recursively calculates the heights of the left and right subtrees of the current node and adds 1 to each. It returns the larger of the two heights.

The binary_tree_balance function measures the balance factor of a binary tree. It first checks if the tree is NULL. If it is, it returns 0. Then it calculates the balance factor by subtracting the height of the right subtree from the height of the left subtree. It returns this balance factor.


Task 15:  This function works by recursively checking if all nodes in the tree have either 0 or 2 children. It returns 1 if the tree is full and 0 otherwise. If the input tree is NULL, it also returns 0.

Task 16: This function works by checking if all internal nodes have two children and all leaves are at the same level. It returns 1 if the tree is perfect and 0 otherwise. If the input tree is NULL, it also returns 0.

Task 17: This function works by checking if the input node and its parent are not NULL. If either is NULL, it returns NULL. Then it checks if the input node is the left child of its parent. If it is, it returns the right child of the parent (which is the sibling of the input node). If the input node is not the left child of its parent, it must be the right child, so it returns the left child of the parent (which is again the sibling of the input node).

Task 18: This function works by checking if the input node and its parent are not NULL. If either is NULL, it returns NULL. Then it calls the binary_tree_sibling function with the parent of the input node as an argument. This will return the sibling of the parent, which is the uncle of the input node.

Task 19: This function works by iterating up through the ancestors of the first node and for each ancestor, it iterates through the ancestors of the second node. If it finds a common ancestor, it returns it. If no common ancestor is found, it returns NULL.

Task 20: This function works by first finding the height of the tree and then printing nodes at each level from top to bottom. The print_given_level function is used to print nodes at a given level.
