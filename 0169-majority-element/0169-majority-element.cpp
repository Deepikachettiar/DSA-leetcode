class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;

        for(int x:nums)
        {
            count[x]++;
            if(count[x]>(nums.size()/2))
                return x;
        }

        return -1;
    }
};