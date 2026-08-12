class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int digit;
        vector<int> arr(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
                int lar=0;
                int var=nums[i];
                int small=var%10;
                while(var>0)
                {
                    digit=var%10;
                    lar = max(lar, digit);
                    small = min(small, digit);
                    var=var/10;
                }
                arr[i]=lar-small;
        }

        int maxx = *max_element(arr.begin(), arr.end());
        int sum=0;
        for(int i=0;i<nums.size();i++)
            {
                if(arr[i]==maxx)
                {
                    sum+=nums[i];
                }
            }
        
        return sum;
    }
};