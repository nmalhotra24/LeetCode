""" Given a non-negative integer num, repeatedly add all its digits until the result 
    had only one digit.
    For example:
      Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one
      digit, return it.
"""
class Solution:
    def addDigits(self, num):
        number_size = str(num)
        if(len(number_size) == 1):
            return num
        else:
            sum = 0
            for i in number_size:
                sum += int(i)
            return self.addDigits(sum)

""" The solution without using any loop/recursion in O(1) runtime """
class Solution:
    def addDigits(self, num):
        if num == 0:
            return 0
        else:
            sum = (num - 1) % 9 + 1
        return sum
