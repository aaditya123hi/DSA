class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> counts;
        
        for (int num : nums) {
           
            count += counts[num];
            counts[num]++;
        }
        
        return count;
    }
};
