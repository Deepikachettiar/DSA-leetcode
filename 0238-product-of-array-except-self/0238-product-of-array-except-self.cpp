class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i=0;
        vector<int> arr(nums.size(),1);
        int left=1;
        for(int i=0;i<nums.size();i++)
        {
            arr[i]=left;
            left*=nums[i];
        }

        int right=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            arr[i]*=right;
            right*=nums[i];
        }

        return arr;
    }
};