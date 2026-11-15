class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // Sort the points in-place based on their x-coordinates
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        int max_width = 0;
        
        // Find the maximum gap between adjacent x-coordinates
        for (size_t i = 1; i < points.size(); ++i) {
            int current_gap = points[i][0] - points[i - 1][0];
            max_width = max(max_width, current_gap);
        }
        
        return max_width;
    }
};
