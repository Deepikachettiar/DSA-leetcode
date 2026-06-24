
//doing this in iterative manner
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;

        while(start<=end)
        {
            int index= floor((start+end)/2);
            if(nums[index]==target)
                return index;

            else if(nums[index]>target)
            {
                end=index-1;
                n=n-index;
            }

            else
            {
                start=index+1;
                n=n-index;
            }
        }

        return -1;
    }
};