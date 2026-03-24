class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int maxi = INT_MIN;   // largest
        int maxi2 = INT_MIN;  // second largest

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > maxi)
            {
                maxi2 = maxi;   
                maxi = nums[i]; 
            }
            else if(nums[i] > maxi2 && nums[i] != maxi)
            {
                maxi2 = nums[i]; 
            }
        }

        return maxi2;
    }
};
