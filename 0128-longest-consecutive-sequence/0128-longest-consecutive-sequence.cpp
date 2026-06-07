class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            a.insert(nums[i]);
        }

        int count=0;
        int maxi=0;

        for(int x : a)
        {
            if(a.find(x-1) == a.end())
            {
                int temp=x+1;  //store the present value in a variable and check for the next consecutive number if present then increment count
                count=1;  // for every iteration initialise the count caule to 1
                
                while(a.find(temp)!=a.end())
                {
                    count++;
                    temp++;
                }
            }

            maxi=max(maxi,count);
        }

        return maxi;
    }
};