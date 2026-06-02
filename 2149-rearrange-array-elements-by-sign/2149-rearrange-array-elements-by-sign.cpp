class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=nums.size()/2;
        vector <int> a(nums.size(),0);
        int i=0;
        int j=0;
        int k=0;

        while(pos>0)
        {
            while(nums[i]<0 && i<nums.size())
            {
                i++;
            }
            a[j]=nums[i];
            i++;
            j++;
            pos--;

            while(nums[k]>=0 && k<nums.size())
            {
                k++;
            }
            a[j]=nums[k];
            k++;
            j++;

        }

        return a;
    }
};