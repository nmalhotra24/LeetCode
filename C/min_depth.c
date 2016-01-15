/* Given a binary tree, find its minimum depth. 
   The minimum depth is the number of nodes along the shortest path from the root
   node down to the nearast leaf node.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int left_depth = minDepth(root->left)+1;
    int right_depth = minDepth(root->right)+1;
    
    if (root->right == NULL) {
        return left_depth;
    } else if (root->left == NULL) {
        return right_depth;
    } else if (right_depth < left_depth) {
        return right_depth;
    } else {
        return left_depth;
    }
    
}