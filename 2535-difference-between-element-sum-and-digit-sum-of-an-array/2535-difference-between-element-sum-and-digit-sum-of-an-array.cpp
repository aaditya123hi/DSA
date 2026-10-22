class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum = 0, dsum = 0;
        for (int num : nums) {
            esum += num;
            while (num > 0) {
                dsum += num % 10;
                num /= 10;
            }
        }
        return esum - dsum; 
    }
};
