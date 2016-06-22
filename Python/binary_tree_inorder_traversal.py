# Given a binary tree, return the inorder traversal of its node's value.

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


"""Algorithm:
    1. Create an empty stack S
    2. Initialize current to root
    3. Push the current node onto stack S and set current = current.left
    4. If current == NULL and stack != NULL
    a) Pop off the top item from the stack
    b) Print the item and set current = item->right
    c) Repeat from step 3
    5. If current == NULL and stack == NULL, then we are done
"""
class Solution(object):
    def inorderTraversal(self, root):
        """
            :type root: TreeNode
            :rtype: List[int]
        """
        if root == None:
            return []
        # set current to the root of the binary tree
        stack = [root] # initialize the stack
        current = root.left
        result = []
        
        while len(stack) != 0 or current != None:
            # Find the leftmost node of current
            while current != None:
                stack.append(current)
                current = current.left
            
            # Get the value in leftmost node
            current = stack.pop()
            result.append(current.val)
            
            current = current.right
        return result