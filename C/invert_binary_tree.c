// Invert a binary tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    } else {
        // mirror the subtrees
        invertTree(root->left);
        invertTree(root->right);
        
        // swap the left and right subtrees
        struct TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    return root; 
}