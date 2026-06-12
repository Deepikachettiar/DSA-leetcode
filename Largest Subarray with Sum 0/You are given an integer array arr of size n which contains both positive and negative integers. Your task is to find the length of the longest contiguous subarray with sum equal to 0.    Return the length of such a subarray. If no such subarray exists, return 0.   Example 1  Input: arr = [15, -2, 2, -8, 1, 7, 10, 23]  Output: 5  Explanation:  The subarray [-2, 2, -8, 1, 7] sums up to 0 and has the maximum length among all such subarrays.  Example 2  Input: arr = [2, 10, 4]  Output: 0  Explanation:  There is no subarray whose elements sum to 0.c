class Solution {
  public:
    int maxLen(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            int sum=arr[i];
            int count=0;
            int j=i+1;
            while(j<arr.size() && sum==0)
            {
                sum+=arr[j];
                j++;
                count++
            }
        }

        return count;
    }
};
