class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        table = set()
        while True:
            if 0 <= n <= 9:
                if (n == 1 or n == 7): # Special case
                    return True
                return False
            if n in table:
                return True
            table.add(n)

            sum = 0
            for c in str(n):
                sum += int(c) ** 2
            n = sum


if __name__ == '__main__':
    solu = Solution()
    res = solu.isHappy(19)
    print(res)
