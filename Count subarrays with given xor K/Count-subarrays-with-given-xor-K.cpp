class Solution {
public:
    int subarraysWithXorK(vector<int>& A, int k) {
        unordered_map<int,int> arr;
        arr[0]=1;
        int count=0;
        int x=0;

        for(int i=0;i<A.size();i++)
        {
            int a=A[i];
            x=x^a;

            int seek=x^k;

            if(arr.find(seek)!=arr.end())
            {
                count += arr[seek]; 
            }

            arr[x]++;
        }

        return count;
    }
};
