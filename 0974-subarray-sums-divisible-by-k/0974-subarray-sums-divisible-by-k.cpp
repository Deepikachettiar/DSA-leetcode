class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> arr;
        vector<int> psum(nums.size(),0);

        psum[0]=nums[0];
        int rem=psum[0]%k;
        if(rem<0)
        {
            rem+=k;
        }

        arr[0]=1;
        int total=arr[rem];
        arr[rem]++;

        for(int i=1;i<nums.size();i++)
        {
            psum[i]=psum[i-1]+nums[i];

            rem=psum[i]%k;
            if(rem<0)
            {
                rem+=k;
            }

            total+=arr[rem];
            arr[rem]++;
        }

        return total;
    }
};