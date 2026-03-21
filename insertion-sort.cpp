class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while ( i < n )
        {
            int key= nums[i];
            int j=i-1;
            while( j>=0 && nums[j]>key)
            {
                nums[j+1] = nums[j];
                --j;
            }
            nums[j+1] = key;
            ++i;
        }

        return nums;
    }
};
