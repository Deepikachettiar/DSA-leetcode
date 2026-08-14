class Solution {
public:
    long long getSum(vector<int>& nums) {

        int n = nums.size();

        // Transform array:
        // -1 acts as separator
        vector<int> a(2 * n + 1);

        for(int i = 0; i < 2 * n + 1; i++)
        {
            if(i % 2 == 0)
                a[i] = INT_MIN;
            else
                a[i] = nums[i / 2];
        }

        vector<int> p(2 * n + 1, 0);

        int center = 0;
        int right = 0;

        for(int i = 0; i < 2 * n + 1; i++)
        {
            int mirror = 2 * center - i;

            if(i < right)
                p[i] = min(right - i, mirror >= 0 ? p[mirror] : 0);

            while(i + 1 + p[i] < 2 * n + 1 &&
                  i - 1 - p[i] >= 0 &&
                  ((i + 1 + p[i]) % 2 == 0 ||
                   a[i + 1 + p[i]] == a[i - 1 - p[i]]))
            {
                p[i]++;
            }

            if(i + p[i] > right)
            {
                center = i;
                right = i + p[i];
            }
        }

        // Prefix sum of original array
        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + nums[i];

        long long ans = LLONG_MIN;

        // Convert palindrome radius back to original indices
        for(int i = 0; i < 2 * n + 1; i++)
        {
            int radius = p[i];

            int l = (i - radius + 1) / 2;
            int r = (i + radius - 1) / 2;

            if(l >= 0 && r < n && l <= r)
            {
                long long sum = prefix[r + 1] - prefix[l];

                ans = max(ans, sum);
            }
        }

        return ans;
    }
};