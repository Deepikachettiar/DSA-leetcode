class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=-1;
        int min=nums[0];

        while(left<=right)
        {
            mid=(left+right)/2;

            if(nums[mid]<min)
            {
                min=nums[mid];
            }

            if(nums[mid]>nums[right])
            {
                left=mid+1;
            }

            else
            {
                right=mid-1;
            }
        }
        return min;

    }
};