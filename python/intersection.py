#!/usr/bin/env python
# -*- coding:utf-8 -*-


class Solution(object):
    """
    Difficulty: Easy
    Tags: Binary Search, Hash Table, Two Pointers, Sort
    """
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1 = set(nums1)
        nums2 = set(nums2)
        return list(nums1 & nums2)


if __name__ == '__main__':
    solu = Solution()
    res = solu.intersection(
        [1, 2, 2, 1], [2, 2]
    )
    print(res)
