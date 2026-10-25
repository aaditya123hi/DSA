class Solution:
    def countKeyChanges(self, s: str) -> int:
        s = s.lower()
        change = 0 
        for i in range(1,len(s)):
            if s[i] != s[i -1]:
                change += 1
        
        return change