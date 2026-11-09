class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> add;
        
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]>0){
                int rem = nums[i]%10;
                add.push_back(rem);
                nums[i]= nums[i]/10;
            }


        }
        reverse(add.begin(),add.end());
        return add;
    }
};