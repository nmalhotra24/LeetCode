/* Given two binary trees, write a function to check if they are equal or not. 
   Two binary trees are considered equal if they are structurally identical and
   the nodes have the same value.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
  // if both the trees are empty
  if ((p == NULL) && (q == NULL)) return true;
  
  // if one is empty and the other is not
  if ((p != NULL) && (q == NULL)) {
    return false; 
  } else if ((p == NULL) && (q != NULL)) {
    return false;
  }
  
  // check if the data in the root nodes are the same
  if (p-> val != q->val) {
    return false;
  }
  
  // recursively check the left subtree and the right subtree
  return ((isSameTree(p->left, q->left)) && (isSameTree(p->right, q->right)));
}
