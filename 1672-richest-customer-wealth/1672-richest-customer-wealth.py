class Solution(object):
    def maximumWealth(self, accounts):
        maxWealth = 0
        
        n = len(accounts)
        m = len(accounts[0])
        for i in range(n):
            total = 0
            for j in range(m):
                total += accounts[i][j]
                
            if total > maxWealth:
                maxWealth = total
        
        return maxWealth
    

            
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        