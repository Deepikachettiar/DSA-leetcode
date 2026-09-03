class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size()==2)
        {
            if(accumulate(numbers.begin(),numbers.end(),0)==target)
            {
                return {1,2};
            }
        }
        unordered_map<int,int> check;
        check[numbers[0]]=0;

        for(int i=1;i<numbers.size();i++)
        {
            int temp=target-numbers[i];
            if(check.find(temp)!=check.end())
            {
                return {check[temp]+1,i+1};
            }

            check[numbers[i]]=i;
        }

        return {-1,-1};

    }
};