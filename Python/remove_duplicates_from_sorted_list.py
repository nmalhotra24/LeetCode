""" Given a sorted linked list, delete all duplicates such that each element appear only once.
    
    For example:
    Given 1->1->2, return 1->2.
    Given 1->1->2->3->3, return 1->2->3.
"""
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution(object):
    def deleteDuplicates(self,head):
        temp = ListNode(None)
        current = head
            while current:
                if current.val == temp.val
                    temp.next = current.next
                else:
                    temp = current
                current = current.next
            return head 