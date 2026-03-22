class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int i=nums.size();
        while(i>=0)
        {
            sort(nums,nums[i]);
            --i;
        }
        return nums;
    }

    void sort(vector<int>& nums,int key)
    {
        int j=nums.size();
        while(j>=0 && nums[j-1]>key )
        {
            nums[j]=nums[j-1];
            j--;
        }

    }
};
