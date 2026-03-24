class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0];  // assume first element is largest

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > maxi)
            {
                maxi = nums[i];  // update if found larger
            }
        }

        return maxi;
    }
};
