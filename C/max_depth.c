// Given a binary tree, find its maximum depth.
// The maximum depth is the number of nodes along the longest path from the 
// root node down to the farthest leaf node.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root)
{
  if (root == NULL) {
    return 0;
  }
    
  int left_depth = maxDepth(root -> left);
  int right_depth = maxDepth(root -> right);
    
  if (right_depth > left_depth) {
      return right_depth + 1;
  } else {
      return left_depth + 1;
  }
}
