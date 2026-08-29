class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int maxx = 0;

        for(int del = -1; del < n; del++)
        {
            vector<int> arr;

            for(int i = 0; i < n; i++)
            {
                if(i != del)
                {
                    arr.push_back(nums[i]);
                }
            }

            int m = arr.size();

            vector<int> prefix(m);
            vector<int> suffix(m);

            prefix[0] = arr[0];

            for(int i = 1; i < m; i++)
            {
                prefix[i] = gcd(prefix[i-1], arr[i]);
            }

            suffix[m-1] = arr[m-1];

            for(int i = m-2; i >= 0; i--)
            {
                suffix[i] = gcd(arr[i], suffix[i+1]);
            }

            int count = 0;

            for(int i = 0; i < m-1; i++)
            {
                if(prefix[i] == suffix[i+1])
                {
                    count++;
                }
            }

            maxx = max(maxx, count);
        }

        return maxx;
    }
};