class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(target>sum)
        {
            return 0;
        }
        sum=0;
        int index=INT_MAX;
        while(right<nums.size())
        {
            sum+=nums[right];
            while(sum>=target)
            {
                index=min(index,right-left+1);
                sum-=nums[left];
                left++;
            }

            right++;
        }

        return index;
    }
};