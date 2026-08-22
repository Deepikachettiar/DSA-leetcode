class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> arr;

        for(int i=0;i<nums.size();i++)
        {
            if(arr[nums[i]]==1)
            {
                return nums[i];
            }
            arr[nums[i]]++;
        }

        return -1;
    }
};