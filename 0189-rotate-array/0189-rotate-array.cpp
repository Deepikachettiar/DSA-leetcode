class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();        
        k=k%n;                          //this will make the k be inside the bounds even when k is exceeding the array size

        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
    }
};


/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0)
        {
            int val=nums[nums.size()-1];
            for(int i=nums.size()-1 ; i>0 ; i--)
            {
                nums[i]=nums[i-1];
            }
            nums[0]=val;
            --k;
        }
    }
};
*/