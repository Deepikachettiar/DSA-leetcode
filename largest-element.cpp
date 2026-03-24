class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int max = INT_MIN;   // largest
        int max2 = INT_MIN;  // second largest

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max)
            {
                max2 = max;   
                max = nums[i]; 
            }
            else if(nums[i] > max2 && nums[i] != max)
            {
                max2 = nums[i]; 
            }
        }

        return max2;
    }
};
