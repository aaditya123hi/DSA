#include <vector>

class Solution {
public:
    int countDigitOccurrences(std::vector<int>& nums, int digit) {
        int totalCount = 0;

        for (int num : nums) {
            // Handle the edge case where the number itself is 0
            if (num == 0 && digit == 0) {
                totalCount++;
                continue;
            }

            // Extract each digit mathematically from right to left
            while (num > 0) {
                if (num % 10 == digit) {
                    totalCount++;
                }
                num /= 10;
            }
        }

        return totalCount;
    }
};
