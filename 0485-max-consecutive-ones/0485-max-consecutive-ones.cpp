class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int i=0;
        while(i<nums.size())
        {
            int count=0;
            while(i<nums.size() && nums[i]==1)
            {
                count++;
                ++i;
            }
            if(count>max)
                max=count;
            i++;
        }
        return max;
    }
};