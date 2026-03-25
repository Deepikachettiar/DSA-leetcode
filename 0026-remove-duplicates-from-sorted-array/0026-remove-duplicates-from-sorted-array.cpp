class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {

                for(int j=i+1;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                    --n;
                }

            }

            else
                ++i;
        }

        return n;

    }
};