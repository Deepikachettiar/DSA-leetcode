class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long sum = 0;   

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];

                if (sum == k) {
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
            }
        }

        return maxi;
    }
};