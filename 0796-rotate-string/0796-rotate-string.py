class Solution(object):
    def rotateString(self, s, goal):
        if len(s) != len(goal):
            return False
        if s == "":
            return True

        n = len(s)
        for k in range(n):
            rotated = s[k:] + s[:k]
            if rotated == goal:
                return True

        return False
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        