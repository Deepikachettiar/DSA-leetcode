class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end()); //this arranges the array in lexicographic order so basically when the prefix doesnt match the one with lower alphabet is placed front.. so when comparing the first and the last we get where exactly the prefix ends

        string left=strs[0];
        string right=strs[strs.size()-1];
        string total="";

        for(int i=0;i<min(left.size(),right.size());i++)
        {
            if(left[i]!=right[i])
            {
                return total;
            }
            total+=left[i];

        }

        return total;

    }
};