class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> x;

        int left=0;
        int maxx=0;

        for(int right=0;right<s.length();right++)
        {
            if(x.find(s[right])!=x.end() && x[s[right]]>=left)
            {
                left=x[s[right]]+1;
            }

            x[s[right]]=right;

            maxx=max(maxx,right-left+1);
        }

        return maxx;
    }
};

//can be done using an array that store the index of last seen char and chekcing if it is repeating by compering instead of using unordered pair