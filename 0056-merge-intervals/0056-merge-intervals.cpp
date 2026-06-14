class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> arr;
        sort(intervals.begin(),intervals.end());

        for(auto x : intervals)
        {
            if(arr.empty() || arr.back()[1]< x[0])
            {
                arr.push_back(x);
            }

            else
            {
                arr.back()[1]=max(arr.back()[1],x[1]);
                arr.back()[0]=min(arr.back()[0],x[0]);
            }
        }

        return arr;
    }
};