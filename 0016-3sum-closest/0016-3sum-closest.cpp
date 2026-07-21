class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int val=nums[nums.size()-1]+nums[nums.size()-2]+nums[nums.size()-3];

        for(int i=0;i<nums.size()-1;i++)
        {
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int k=target-(nums[i]+nums[l]+nums[r]);
                if(k==0)
                {
                    return target;
                }
                if(abs(k)< abs(target-val))
                {
                    val=nums[i]+nums[l]+nums[r];
                }

                if(k<0)
                {
                    --r;
                }

                else
                {
                    ++l;
                }
            }
        }

        return val;
    }
};