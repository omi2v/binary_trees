#include "binary_trees.h"
/**
 * binary_tree_height - function to find height
 * @tree: the binary tree
 * Return: return something
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t ldepth;
size_t rdepth;
if (tree == NULL)
return (0);
if (tree->left)
ldepth = binary_tree_height(tree->left) + 1;
else
ldepth = 0;

if (tree->right)
rdepth = binary_tree_height(tree->right) + 1;
else
rdepth = 0;

if (ldepth > rdepth)
return (ldepth);
else
return (rdepth);
}
