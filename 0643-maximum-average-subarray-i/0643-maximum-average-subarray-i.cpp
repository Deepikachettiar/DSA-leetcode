class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k-1;
        double sum=accumulate(nums.begin(),nums.begin()+k,0);
        double avg=sum/k;
  

        while(right<(nums.size()-1))
        {
            sum= sum-nums[left]+nums[right+1];
            avg= max(avg,sum/k);
            right++;
            left++;
        }

        return avg;
    }
};