""" Write a function to delete a node (except the tail) in a singly linked 
    list, given only access to that node. """
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteNode(self, node):
        if node is None or node.next is None:
            delete_node = node.next
            node.val = delete_node.val
            node.next = delete_node.next
            del delete_node
