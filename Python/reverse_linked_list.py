""" Reverse a singly linked list """
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        current = head
        temp = current

        if head is None:
            return None
        if head.next is None:
            return head
        while (head != None):
           temp = head
           head = head.next
           temp.next = current
           current = temp
        return current
