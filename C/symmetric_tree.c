// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool is_Symmetric(struct TreeNode* left, struct TreeNode* right) {
    // if both left and right subtrees are empty, then they are symmetric
    if (left == NULL && right == NULL) return true;
    
    /* for the subtrees to be symmetric, the following conditions must be met:
        1. the node's value must be the same
        2. the left subtree of the left tree and the right subtree of the right tree must be the same
        3. the left subtree of the right tree and the right subtree of the left tree must be the same.
    */
    if (left && right) {
        if (left->val == right->val) {
            return is_Symmetric(left->left, right->right) && is_Symmetric(left->right, right->left);
        }
    }
    
    // if neither of the above conditions are met, then the trees are not symmetric
    return false; 
    
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL) return true;
    return is_Symmetric(root->left, root->right);
}

 
