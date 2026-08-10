class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(arr.find(nums[i])!=arr.end())
            {
                if(abs(arr[nums[i]]-i)<=k)
                {
                    return true;
                }
            }

            arr[nums[i]]=i;
        }
        return false;
    }
};