class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            sort(nums,nums[i]);
            ++i;
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
