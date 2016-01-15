""" Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the 
root node down to the farthest leaf node.""" 
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        if root is None:
            return 0
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)
        if right_depth > left_depth:
            return right_depth+1
        else:
            return left_depth+1
