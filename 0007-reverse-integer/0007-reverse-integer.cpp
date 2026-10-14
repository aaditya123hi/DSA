#include <climits> // Required for INT_MAX and INT_MIN

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit from x
            
            // Check for potential positive overflow before updating ans
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
            
            // Check for potential negative underflow before updating ans
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            
            ans = ans * 10 + pop;
        }
        
        return ans;
    }
};

