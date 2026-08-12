class Solution {
public:
    bool canMakeSubsequence(string s, string t) {

        int n = s.size();
        int m = t.size();

        vector<int> prefix(n + 1, m);
        prefix[0] = 0;  

        int j = 0;

        for(int i = 0; i < n; i++)
        {
            while(j < m && s[i] != t[j])
                j++;

            if(j == m)
                break;

            prefix[i + 1] = j + 1;
            j++;
        }

        vector<int> suffix(n + 1, -1);
        suffix[n] = m;

        j = m - 1;

        for(int i = n - 1; i >= 0; i--)
        {
            while(j >= 0 && s[i] != t[j])
                j--;

            if(j < 0)
                break;

            suffix[i] = j;
            j--;
        }

        for(int i = 0; i < n; i++)
        {
            if(prefix[i] < suffix[i + 1])
                return true;
        }

        return false;
    }
};