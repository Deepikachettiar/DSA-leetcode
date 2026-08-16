class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;

        for(int x : nums)
        {
            sum+=x;
        }
        int rightsum=0;
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            rightsum=sum-leftsum-nums[i];

            if(rightsum==leftsum)
            {
                return i;
            }

            leftsum+=nums[i];
        }

        return -1;
    }
};