class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> check(n+1,0);

        for(int i=0;i<n;i++)
        {
            check[nums[i]]=1;
        }

        int ans= find(check.begin(),check.end(),0) - check.begin();

        return ans;

    }
};