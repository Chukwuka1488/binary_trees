#include "binary_trees.h"
#include <stdlib.h>

/* Function declarations */
void print_given_level(const binary_tree_t *tree, int level, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - goes thru a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (tree == NULL || func == NULL)
		return;

	h = binary_tree_height(tree) + 1;
	for (i = 0; i < h; i++)
	{
		print_given_level(tree, i, func);
	}
}

/**
 * print_given_level - prints nodes at a given level
 * @tree: pointer to the root node of the tree to traverse
 * @level: level at which to print nodes
 * @func: pointer to a function to call for each node
 */
void print_given_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print_given_level(tree->left, level - 1, func);
		print_given_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (-1);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
