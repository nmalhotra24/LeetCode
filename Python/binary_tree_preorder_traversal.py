# Given a binary tree, return the preorder traversal of its nodes' values.

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
        """
            :type root: TreeNode
            :rtype: List[int]
        """
        if root == None:
            return []
        # initialize the stack
        stack = [root]
        result = []

        while len(stack) != 0:
            # get the value in the root
            current =  stack.pop()
            result.append(current.val)

            # go to the right subtree and visit its children
            if current.right != None:
                stack.append(current.right)
            # go to the left subtree and visit its children
            if current.left != None:
                stack.append(current.left)
        return result