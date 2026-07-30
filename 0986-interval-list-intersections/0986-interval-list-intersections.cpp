class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> arr;
        vector<int>temp(2);
        int n=firstList.size();
        int m=secondList.size();
        int i=0;
        int j=0;

        while(i<n && j<m)
        {
            temp[0]=max(firstList[i][0],secondList[j][0]);
            temp[1]=min(firstList[i][1],secondList[j][1]);

            if(temp[0]<=temp[1])
            {
                arr.push_back(temp);
            }

            if(firstList[i][1]<secondList[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return arr;
    }
};