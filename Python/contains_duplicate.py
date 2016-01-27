""" Given an array of integers, find if the array contains any duplicates. Your
    function should return true if any value appears at least twice in the 
    array, and it should return false if every element is distinct.
"""

class Solution(object):
    def containsDuplicate(self, nums):
        array = set()
        for i in nums:
            if i in array:
                return True
            else: 
                array.add(i)
        return False 
