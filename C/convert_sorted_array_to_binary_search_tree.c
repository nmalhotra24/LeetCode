// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* ArrayToBST(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    } else {
        int mid = (start + end)/2;
        struct TreeNode* head = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        head->val = nums[mid];
        head->left = ArrayToBST(nums,start,mid-1);
        head->right = ArrayToBST(nums,mid+1,end);
        return head; 
    }
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize < 1) {
        return NULL;
    }
    return ArrayToBST(nums, 0, numsSize-1);
}