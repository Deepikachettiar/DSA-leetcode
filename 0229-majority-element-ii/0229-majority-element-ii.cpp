class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector <int> arr;
        unordered_map<int,int> x;  //using hash map here

        for(int a : nums)
        {
            x[a]++;
        }

        for(auto a : x)  // as x is a hash mapped fucntion when we have to usein for lop we give auto data type
        {
            if(a.second>n/3)
            {
                arr.push_back(a.first);
            }
        }

        return arr;
    }
};