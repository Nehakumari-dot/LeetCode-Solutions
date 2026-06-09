class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int freq[101] = {0}, sum = 0;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (freq[nums[i]] == 1) {
                sum += nums[i];
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna