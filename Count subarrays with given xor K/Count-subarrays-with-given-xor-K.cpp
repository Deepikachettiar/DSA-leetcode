class Solution {
public:
    int subarraysWithXorK(vector<int>& A, int k) {
        unordered_map<int,int> arr;//we use this as a stack to add the history of the previous xor
        arr[0]=1;
        int count=0;
        int x=0;

        for(int i=0;i<A.size();i++) 
        {
            int a=A[i];
            x=x^a; //current value of xor witht the present element

            int seek=x^k; //the value which shd be there in the subarray to get k as the xor value

            if(arr.find(seek)!=arr.end())
            {
                count += arr[seek]; 
            }

            arr[x]++;
        }

        return count;
    }
};
