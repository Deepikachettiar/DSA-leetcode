class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int maxi = INT_MIN;   // largest
        int maxi2 = INT_MIN;  // second largest

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > maxi)
            {
                maxi2 = maxi;   // old largest becomes second largest
                maxi = nums[i]; // update largest
            }
            else if(nums[i] > maxi2 && nums[i] != maxi)
            {
                maxi2 = nums[i]; // update second largest
            }
        }

        return maxi2;
    }
};
