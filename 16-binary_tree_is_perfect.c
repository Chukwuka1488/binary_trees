#include "binary_trees.h"
/**
 * depth - find the depth of the leftmost leaf
 * @node: pointer to the root node of the tree to check
 *
 * Return: return depth
 */
int depth(const binary_tree_t *node)
{
	int d;

	d = 0;
	while (node != NULL)
	{
		d++;

		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - checks if a tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @d: depth of the tree
 * @level: check level of the leaf of the tree
 *
 * Return: 1 if full, otherwise 0. If tree is NULL, return 0
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	/* Check if tree is empty */
	if (tree == NULL)
		return (1);

	/* Check the presence of trees */
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check left and right subtrees */
	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = depth(tree);

	return (is_perfect(tree, d, 0));
}
