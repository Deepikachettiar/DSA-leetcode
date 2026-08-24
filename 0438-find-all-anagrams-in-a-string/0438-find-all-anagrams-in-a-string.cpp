class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr;
        if(s.size()<p.size())
        {
            return arr;
        }
        int right=p.size();
        unordered_map<char,int> check;
        unordered_map<char,int> map;
        for(int i=0;i<p.size();i++)
        {
            map[p[i]]++;
            check[s[i]]++;
        }
        if(check==map)
            {
                arr.push_back(0);
            }

        for(int i=1;i<=s.size()-p.size();i++)
        {
            check[s[i-1]]--;
            if(check[s[i-1]] == 0)
            {
                check.erase(s[i-1]);
            }
            check[s[right]]++;
            if(check==map)
            {
                arr.push_back(i);
            }
            right +=1;

        }

        return arr;
    }
};