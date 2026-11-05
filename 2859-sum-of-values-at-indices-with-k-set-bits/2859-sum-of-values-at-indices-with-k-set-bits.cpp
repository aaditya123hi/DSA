class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int total_sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            bitset<16> binary(i);
            if(binary.count() == k){
                total_sum += nums[i];
            }
        }
        return total_sum;

    }
};