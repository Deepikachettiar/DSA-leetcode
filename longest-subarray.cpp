class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int maxi=0;
        int len=0;

        for (int i=0;i<nums.size();i++)
        {
            int j=i;
            while(j < nums.size())
            {
                long long sum=0;
                sum += nums[j];

                if(sum==k)
                {
                    len=j-i+1;
                    maxi=max(len,maxi);
                }
                    
                j++;
            }
        }

        return maxi;
    }
};
