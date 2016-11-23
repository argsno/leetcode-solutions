#!/usr/bin/env python
# -*- coding:utf-8 -*-


class Solution(object):
    """
    Difficulty: Easy
    Tags: Greedy
    """
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g = sorted(g, reverse=True)
        s = sorted(s)
        cnt = 0
        for si in s:
            if len(g) == 0:
                return cnt
            if g[-1] <= si:
                g.pop()
                cnt += 1
        return cnt

if __name__ == '__main__':
    solu = Solution()
    res = solu.findContentChildren([1, 2], [1, 1, 1])
    print(res)
