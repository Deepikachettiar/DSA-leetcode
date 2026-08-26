class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int maxx=0;
        int res=0;
        unordered_map<char,int> check;

        for(int right =0;right<s.size();right++)
        {
            check[s[right]]++;
            maxx=max(maxx,check[s[right]]);

            while((right-left+1)-maxx > k)
            {
                check[s[left++]]--;
            }

            res=max(res,right-left+1);

        }

        return res;
    }
};