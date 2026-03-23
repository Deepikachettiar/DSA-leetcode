
class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        sort(nums,0,nums.size());
        return nums;
    }

    void sort(vector<int> &nums,int l,int r)
    {
        if (l>=r)
            return;

        int i=l;
        int j=r+1;
        int p=nums[l];

        while (i<j)
        {
            while(nums[i]<p)
            {
                ++i;
            }
            while(nums[j]>p)
            {
                ++j;
            }
            swap(nums[i],nums[j]);
        }

        swap(nums[i],nums[j]);
        swap(nums[l],nums[j]);
        sort(nums,l,j-1);
        sort(nums,j+1,r);
    }
};

```