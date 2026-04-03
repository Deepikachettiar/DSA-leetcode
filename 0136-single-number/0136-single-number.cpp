class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x ^= nums[i];
        }
        return x;
    }
};

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()-1)
        {
            if(nums[i] != nums[i+1])
            {
                if(i==0)
                    return nums[i];
                else if(i==nums.size()-2)
                    return nums[nums.size()-1];
                else if (nums[i]==nums[i-1])
                    return nums[i+1];
                else if(nums[i+1]==nums[i+2])
                    return nums[i];
            }
            i=i+2;
        }
        return nums[i];
    }
};
*/