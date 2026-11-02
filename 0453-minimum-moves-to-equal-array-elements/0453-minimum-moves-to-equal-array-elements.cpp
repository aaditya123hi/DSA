class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_val = *min_element(nums.begin(), nums.end());
        long long moves = 0;

        for (int num : nums) {
            moves += (num - min_val);
        }

        return moves;
    }
};