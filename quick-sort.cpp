class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        sort(nums,0,nums.size()-1);
        return nums;
    }

    void sort(vector<int> &nums,int l,int r)
    {
        if (l>=r)
            return;

        int i=l+1;
        int j=r;
        int p=nums[l];

        while (i<=j)
        {
            while(i<=r && nums[i]<p)
            {
                ++i;
            }
            while(j>=l && nums[j]>p)
            {
                --j;
            }

            if(i>=j)
               break;

            swap(nums[i],nums[j]);
            
            
        }

        swap(nums[l],nums[j]);
        sort(nums,l,j-1);
        sort(nums,j+1,r);
    }
};
