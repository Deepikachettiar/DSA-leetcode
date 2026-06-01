class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=0;

        for(int x : nums)
        {
            sum=sum+x;
            if (sum<0)
                sum=0;
            
            else if(sum>max)
                max=sum;
        }

        if(max==0)
            return *max_element(nums.begin(),nums.end());

        else
            return max;
    }
};