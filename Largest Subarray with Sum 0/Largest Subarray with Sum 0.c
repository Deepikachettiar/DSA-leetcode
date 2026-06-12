class Solution {
public:
    int maxLen(vector<int>& arr) {
        int maxi=0;

        for(int i=0;i<arr.size();i++)
        {
            int sum=0;

            for(int j=i;j<arr.size();j++)
            {
                sum+=arr[j];

                if(sum==0)
                {
                    maxi=max(maxi,j-i+1);
                }
            }
        }

        return maxi;
    }
};
