class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0]; 

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > maxi)
            {
                maxi = nums[i]; 
            }
        }

        return maxi;
    }
};
