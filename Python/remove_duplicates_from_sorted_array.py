""" Given a sorted array, remove the duplicates in place such that each element
    appear only once and return the new length. Do no allocate extra space for 
    another array, you must do this in place with constant memory."""

class Solution(object):
    def removeDuplicates(self, nums):  
        if not nums:
            return 0
        
        last = 0
        i = 1
        while i < len(nums):
            if nums[last] != nums[i]:
                last += 1
                nums[last] = nums [i]
            i += 1
        return last + 1
        
