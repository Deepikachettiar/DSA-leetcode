class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector <int> arr;
        unordered_map<int,int> x;

        for(int a : nums)
        {
            x[a]++;
        }

        for(auto a : x)
        {
            if(a.second>n/3)
            {
                arr.push_back(a.first);
            }
        }

        return arr;
    }
};