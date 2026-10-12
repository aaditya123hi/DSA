
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_Count = 0;
        int n = sentences.size();

        for (int i = 0; i < n; i++) {
            int spaceCount = 0;

            for (char c : sentences[i]) {
                if (c == ' ') {
                    spaceCount++;
                }
            }

            int wordCount = spaceCount + 1;

            if (wordCount > max_Count) {
                max_Count = wordCount;
            }
        }

        return max_Count;
    }
};
