class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i=0 ; i<n;i++)
        {
            int didswap=0;
            for(int j= 0; j<n-i-1 ; j++)
            {
                if(nums[j] > nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    didswap=1;
                }
            }
            if(!didswap)
                break;
        }

        return nums;
    }
};
