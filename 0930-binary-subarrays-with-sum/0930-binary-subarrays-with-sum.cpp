class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> arr;
        int sum=0;
        int count=0;
        arr[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(arr.find(sum-goal)!=arr.end())
            {
                count+=arr[sum-goal];
            }
            arr[sum]++;
        }
        return count;
    }
};