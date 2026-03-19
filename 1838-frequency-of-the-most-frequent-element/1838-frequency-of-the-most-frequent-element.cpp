class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        //first trying to sort the array using bubble sort
        int n=nums.size();
        sort(nums.begin(),nums.end());

        //then we use sliding window concept...
        long long int sum=0;  //sum of the window elements
        int size=0;            //window size
        int left=0;             //left most element of the window
        int max_size=0;
        for(int right=0;right<n;right++)   //for all the sizes of winsow that is the smallest to the largest
        {
            sum+=nums[right];
            ++size;

            while((long long)nums[right]*size-sum>k)    //consition to modify the window size is right most ele* size of the window-sum of the  elements of the window > k 
            {
                sum = sum - nums[left];         //shrink the window size from left
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