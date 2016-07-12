// Given inorder and postorder traversal of a tree, construct the binary tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 **/
struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
    if (inorderSize == 0 || postorderSize == 0) {
        return NULL;
    }
    int root_index;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    //the last node in the postorder array is the root of the tree
    root->val = postorder[postorderSize-1];
    
    //find the position of the root node in the inorder array -> this divides the array into two subtree arrays - Left and Right
    for (int i = 0; i < inorderSize;i++) {
        if (root->val == inorder[i]) {
            root_index = i;
            break;
        }
    }
    
    //recursively call buildTree to build the left and right side of the tree
    root->left = buildTree(inorder, root_index, postorder, root_index);
    root->right = buildTree(inorder+root_index+1, inorderSize-root_index-1, postorder+root_index, postorderSize-root_index-1);
    
    return root; 
}