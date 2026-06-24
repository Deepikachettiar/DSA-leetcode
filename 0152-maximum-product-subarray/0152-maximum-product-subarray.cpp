//this is a easy sum whcih is there but with a small twist.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int curmax=nums[0];    //the reason of having min also is due to the negative numbers 2 neg numbers product gives a positve and a bigger number. so swap when u see a neg number and multipy for max
        int curmin=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int x=nums[i];
            if(x<0)
            {
                swap(curmax,curmin);
            }

            curmax=max(curmax*x,x);
            curmin=min(curmin*x,x);
            
            if(curmax>maxi)
                maxi=curmax;
        }

        return maxi;
    }
};