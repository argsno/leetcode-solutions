class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        lis = [None] * len(nums)
        for i, num in enumerate(nums):
            lis[i] = 1
            for j in range(i):
                if num > nums[j] and lis[j] >= lis[i]:
                    lis[i] = lis[j] + 1
        return max(lis)
