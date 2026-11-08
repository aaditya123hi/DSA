class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> add;
        for(int i=1;i<=height.size()-1;i++){
            if(height[i-1]>threshold){
                add.push_back(i);
            }
        }
        return add;
    }
};