""" Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.
"""
def containsNearbyDuplicate(self, nums, k):
    # type nums: List[int]
    # type k: int
    # rtype: bool
    array = {}
    if len(nums) == 0:
        return False
    for i in range(0, len(nums)):
        index = array.get(nums)
        if index != None and i - index <= k:
            return True
        else:
            array[nums[i]] = i
    return False

