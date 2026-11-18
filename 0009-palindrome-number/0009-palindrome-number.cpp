class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
        if (x < 0) return false;

        long long rev = 0; // Use long long to prevent integer overflow
        int dup = x;

        while (x > 0) {
            int LD = x % 10;
            rev = (rev * 10) + LD;
            x = x / 10;
        }

        return dup == rev;
    }
};
