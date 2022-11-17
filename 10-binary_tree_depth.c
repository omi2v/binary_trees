#include "binary_trees.h"
/**
 * binary_tree_depth - the function indeoth
 * @tree: the root
 * Return: something
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count;
if (tree == NULL)
return (0);
count = binary_tree_depth(tree->parent);
count++;
return (count);
}
