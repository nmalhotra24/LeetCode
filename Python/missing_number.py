""" Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
    
    For example,
    Given nums = [0, 1, 3] return 2.
"""
class Solution(object):
    def missingNumber(self, nums):
        """
            :type nums: List[int]
            :rtype: int
            """
        size = len(nums)
        total = sum(nums)
        
        return (size*(size+1)/2 - total)