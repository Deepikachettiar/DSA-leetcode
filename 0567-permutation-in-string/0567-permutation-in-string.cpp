class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
        {
            return false;
        }
        int right=s1.size();
        unordered_map<char,int> check;
        unordered_map<char,int> map;
        for(int i=0;i<s1.size();i++)
        {
            map[s1[i]]++;
            check[s2[i]]++;
        }
        if(check==map)
            {
                return true;
            }

        for(int i=1;i<=s2.size()-s1.size();i++)
        {
            check[s2[i-1]]--;
            if(check[s2[i-1]] == 0)
            {
                check.erase(s2[i-1]);
            }
            check[s2[right]]++;
            if(check==map)
            {
                return true;
            }
            right +=1;

        }

        return false;
    }
};