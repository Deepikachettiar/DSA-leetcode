class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n)
        {
            sort(nums,i);
            ++i;
        }
        return nums;
    }

    void sort(vector<int>& nums,int i)
    {   int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key )
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
};
