class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> arr;
        int maxx=0;
        int sum=0;

        arr[0]=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i])
            {
                sum++;
            }
            else
            {
                sum--;
            }

            if(arr.find(sum)!=arr.end())
            {
                maxx=max(maxx,i-arr[sum]);
            }
            else
            {
                arr[sum]=i;
            }
        }

        return maxx;
    }
};