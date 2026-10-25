class Solution {
public:
    int differenceOfSums(int n, int m) {
        // Total sum of all numbers from 1 to n
        int total_sum = n * (n + 1) / 2;
        
        // Count of numbers divisible by m
        int k = n / m;
        
        // Sum of all numbers divisible by m (m + 2m + 3m + ... + km)
        int num2 = m * (k * (k + 1) / 2);
        
        // Since total_sum = num1 + num2, then num1 = total_sum - num2
        // We want to return num1 - num2 -> (total_sum - num2) - num2
        return total_sum - 2 * num2;
    }
};
