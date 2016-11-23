#!/usr/bin/env python
# -*- coding:utf-8 -*-


class Solution(object):
    """
    Difficulty: Easy
    Tags: Hash Table
    """
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        islands = 0
        neighbours = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if (grid[i][j] == 1):
                    islands += 1
                    if (i < len(grid) - 1 and grid[i+1][j] == 1):
                        neighbours += 1
                    if (j < len(grid[i]) - 1 and grid[i][j+1] == 1):
                        neighbours += 1

        return islands * 4 - neighbours * 2


if __name__ == '__main__':
    solu = Solution()
    res = solu.islandPerimeter(
        [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]
        ])
    print(res)
