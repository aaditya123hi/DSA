class Solution {
private:
    void reverseRange(vector<int>& nums, int left, int right) {
        while(left<=right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        int n =(int) nums.size();
        k = k%n;
        if (n <= 1) return;
        reverseRange(nums, 0, n - 1);
        reverseRange(nums, 0, k - 1);
        reverseRange(nums, k, n - 1);
    }
};