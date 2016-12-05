from collections import defaultdict

class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        count = defaultdict(int)
        for char in magazine:
            count[char]++
        for char in ransomNote:
            count[char]--;
            if count[char] < 0:
                return False
        return True
