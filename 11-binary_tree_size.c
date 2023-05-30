#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		return (1 + l + r);
	}
}
