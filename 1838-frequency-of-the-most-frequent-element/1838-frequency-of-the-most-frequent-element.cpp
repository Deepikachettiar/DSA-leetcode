class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        //first trying to sort the array using bubble sort
        int n=nums.size();
        sort(nums.begin(),nums.end());

        //then we use sliding window concept...
        long long int sum=0;
        int size=0; 
        int left=0;
        int max_size=0;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            ++size;

            while((long long)nums[right]*size-sum>k)
            {
                sum = sum - nums[left];
                left++;
                size--;
            }
            if(size>max_size)
            {
                max_size=size;
            }
        }

        return max_size;

    }
};