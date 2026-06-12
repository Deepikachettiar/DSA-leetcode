class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int maxi=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            int sum=arr[i];
            int count=0;
            int j=i+1;
            while(j<arr.size() && sum==0)
            {
                sum+=arr[j];
                j++;
                count++;
            }
            maxi=max(maxi,count);
        }

        return maxi;
    }
};
