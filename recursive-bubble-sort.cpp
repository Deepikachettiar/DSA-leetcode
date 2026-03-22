class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        vector<int> sorted=sort(nums,nums.size());
        return sorted;   
    }

    void sort(vector<int> &nums,int n)
    {
        if(n==1)
        {
            return nums;
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] > nums[i+1])
            {
                swap(nums[i],nums[i+1]);
            }
        }

        sort(nums,n-1);
    }
};
