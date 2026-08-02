class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        int n=nums.size()-1;
        int steps=nums[0];

        for(int i=0;i<nums.size()-1;i++)
        {
            if(i>reach)
            {
                return false;
            }

            reach=max(reach,(i+nums[i]));
        }


        if(n>reach)
        {
            return false;
        }

        return true;
    }
};