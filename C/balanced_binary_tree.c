/* Given a binary tree, determine if it is height-balanced.
   For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);
    if (left_depth > right_depth) {
        return left_depth+1;
    } else {
        return right_depth+1;
    }
}

bool isBalanced(struct TreeNode* root) {
    // an empty tree is balanced
    if (root == NULL) return true;
    
    // get the depth of the two subtrees
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    //get the difference between the two subtrees
    int diff = left - right;
    
    // if the difference is no more than 1 -> balanced, else not balanced
    if (diff == -1 || diff == 0 || diff == 1) {
        if (isBalanced(root->left) && isBalanced(root->right)) {
            return true;
        } else {
            // if we reach here, then tree is not balanced
            return false;
        }
    } else {
        // if we reach here, then tree is not balanced
        return false;
    }
}