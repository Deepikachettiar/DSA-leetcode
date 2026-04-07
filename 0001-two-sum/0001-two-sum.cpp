class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> x;

       for(int i=0;i<nums.size();i++)
       {
        int rem= target-nums[i];

        if(x.find(rem)!=x.end())
        {
            return {x[rem],i};
        }

        x[nums[i]]=i;   //this stores that previously seen values
       }

       return {};
    }
};

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    sum.push_back(i);
                    sum.push_back(j);
                    return sum;
                }
            }
        }

        return sum;
    }
};
*/