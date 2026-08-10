class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;

        while(i<nums.size()-1)
        {
            int j=i+1;
            if(nums[i]== nums[j])
            {
                return true;
            }
            i++;
        }
        return false;

    }
};