class Solution {
public:
    string frequencySort(string s) {
        int n = (int)s.size();

        // Step 1: Har character ki frequency count karo (ASCII 0..255)
        vector<int> freq(256, 0);
        for (unsigned char ch : s) {
            freq[ch]++;
        }

        // Step 2: Frequency ke hisab se buckets banao (index 0 se n tak)
        vector<vector<char>> buckets(n + 1);
        for (int c = 0; c < 256; c++) {
            if (freq[c] > 0) {
                buckets[freq[c]].push_back((char)c);
            }
        }

        // Step 3: Badi frequency se chhoti frequency tak ulta chalo
        string result;
        result.reserve(n);
        for (int count = n; count >= 1; count--) {
            for (char ch : buckets[count]) {
                result.append(count, ch);
            }
        }

        return result;
    }
};