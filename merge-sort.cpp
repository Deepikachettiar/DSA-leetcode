class Solution {
public:

    vector<int> merge(vector<int> left,vector<int> right)
    {
        vector<int> res;

        int i=0;
        int j=0;
        int k=0;

        while(i<left.size() && j<right.size())
        {
            if(left[i]< right[i])
            {
                res.push_back(left[i]);
                ++i;
                ++k;
            }
            else
            {
                res.push_back(right[j]);
                ++j;
                ++k;
            }
    }

    if(i<left.size())
    {
        while(i<left.size())
        {
            res.push_back(left[i]);
            ++i;
            ++k;
        }
    }
    else
    {
        while(j<right.size())
        {
            res.push_back(right[j]);
            ++j;
            ++k;
        }
    }
    return res;
}

    vector<int> mergeSort(vector<int>& nums) {
        int n= nums.size();
        if (n<=1)
        {
            return nums;
        }

        int mid=n/2;

        vector<int> left= mergeSort(vector<int>(nums.begin(),nums.begin()+mid));
        vector<int> right= mergeSort(vector<int>(nums.begin()+mid,nums.end()));

        return merge(left,right);
    }
};

