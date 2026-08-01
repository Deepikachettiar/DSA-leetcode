class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> arr;
        arr[0]=1;

        int sum=0;
        int total=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            int rem=sum%k;
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