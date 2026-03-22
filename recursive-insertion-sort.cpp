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
        int j=i;
        while(j>0 && nums[j-1]>key )
        {
            nums[j]=nums[j-1];
            j--;
        }
        nums[j+1]=key;
    }
};
