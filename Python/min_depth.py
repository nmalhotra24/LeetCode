""" Given a binary tree, find its minimum depth. 
    The minimum depth is the number of nodes along the shortest path from the root
    node down to the nearest leaf node."""
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
       if root is None:
           return 0
       left_depth = self.minDepth(root.left)+1
       right_depth = self.minDepth(root.right)+1
       if root.right is None:
           return left_depth
       elif root.left is None:
           return right_depth
       elif right_depth < left_depth:
           return right_depth
       else:
           return left_depth
