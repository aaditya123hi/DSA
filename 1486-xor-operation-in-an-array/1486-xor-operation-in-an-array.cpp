class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        
        // Loop from 0 up to n-1 to track the zero-indexed elements
        for (int i = 0; i < n; i++) {
            // Apply the bitwise XOR operator (^) to accumulate the answer
            result ^= (start + 2 * i);
        }
        
        return result;
    }
};
