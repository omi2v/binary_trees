#include "binary_trees.h"
/**
 * binary_tree_size - function to check the size
 * @tree: the main tree
 * Return: something
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t lcount;
size_t rcount;
if (tree == NULL)
return (0);
lcount = binary_tree_size(tree->left);

lcount++;
rcount = binary_tree_size(tree->right);
rcount++;
return (lcount + rcount - 1);
}
