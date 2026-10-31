#include <vector>

class Solution {
public:
    std::vector<int> pivotArray(std::vector<int>& nums, int pivot) {
        std::vector<int> less;
        std::vector<int> equal;
        std::vector<int> greater;
        
      
        for (int num : nums) {
            if (num < pivot) {
                less.push_back(num);
            } else if (num == pivot) {
                equal.push_back(num);
            } else {
                greater.push_back(num);
            }
        }
        

        less.insert(less.end(), equal.begin(), equal.end());
        
        less.insert(less.end(), greater.begin(), greater.end());
        
        return less;
    }
};
