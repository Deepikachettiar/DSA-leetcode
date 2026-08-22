class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int check=1;
        int i=0;

        while(i<nums.size() && check<=nums.size())
        {
            if(nums[i]<=0|| nums[i]<check)
            {
                i++;
            }
            else if(nums[i]==check)
            {
                check++;
                i++;
            }
            else
            {
                break;
            }

        }

        return check;
    }
};