class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> a;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                
                int left=j+1;
                int right=nums.size()-1;

                while(left<right)
                {
                    if((long long)nums[i]+nums[j]+nums[left]+nums[right]==target)
                    {
                        a.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;

                        while(left<right && nums[right]==nums[right+1])
                            right--;
                        
                        while(left<right && nums[left]==nums[left-1])
                            left++;

                    }

                    else if((long long)nums[i]+nums[j]+nums[left]+nums[right]<target)
                    {
                        left++;
                    }

                    else if((long long)nums[i]+nums[j]+nums[left]+nums[right]>target)
                    {
                        right--;
                    }
                }
            }
        }

        return a;
    }
};