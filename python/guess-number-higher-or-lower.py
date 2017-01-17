# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        low = 1
        high = n
        mid = (1 + n) / 2
        while True:
            flag = guess(mid)
            if flag == 0:
                return mid
            elif flag == 1:
                low = mid + 1
                mid = (low + high) / 2
            elif flag == -1:
                high = mid - 1
                mid = (low + high) / 2
