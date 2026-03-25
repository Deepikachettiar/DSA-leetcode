class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;  // count how many times nums[i] > nums[i+1]

        for(int i = 0; i < n; i++)
        {
            // % n to check last element wrapping to first
            if(nums[i] > nums[(i+1) % n])
                drops++;

            if(drops > 1)
                return false;
        }

        return true;
    }
};
