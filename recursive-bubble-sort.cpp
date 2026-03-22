class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        sort(nums,nums.size());
        return nums;   
    }

    void sort(vector<int> &nums,int n)
    {
        if(n==1)
        {
            return;
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
