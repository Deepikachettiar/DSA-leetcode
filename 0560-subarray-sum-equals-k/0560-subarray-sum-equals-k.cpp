class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {

        int n=nums.size();

        //using hash map
        //this hash mao stores the 
        unordered_map<int,int> setsum;

        int count=0;
        int presum=0;

        setsum[0]=1;

        for(int i=0;i<n;i++)
        {
            presum=presum+nums[i];  //stores the sum of the subset
            int rem=presum-k;       

            if(setsum.find(rem)!=setsum.end())
            {
                count+=setsum[rem];
            }

            setsum[presum]++;
        }

        return count;
    }
};