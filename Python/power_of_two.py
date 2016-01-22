""" Given an integer, write a fuction to determine if it is a power of two. """
class Solution(object):
    def isPowerOfTwo(self,n):
        if n <= 0:
            return False
        while n > 1:
            if n%2 == 0:
                n = n/2
            else:
                return False
        return True 
