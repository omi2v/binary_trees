#include "binary_trees.h"
/**
 * binary_tree_is_root - function to check the if it is a root
 * @node: the given node
 * Return: 1 if is a root or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left != NULL && node->right != NULL)
return (1);
else
return (0);
}
