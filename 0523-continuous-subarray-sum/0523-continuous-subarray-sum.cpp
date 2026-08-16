class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> arr;
        int sum=0;
        arr[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum=sum%k;
            if(arr.find(sum)!=arr.end())
            {
                if(i-arr[sum]>1)
                {
                    return true;
                }
            }
            else
            {
                arr[sum]=i;
            }
        }

        return false;
    }
};