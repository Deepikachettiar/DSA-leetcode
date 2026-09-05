class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        unordered_map<char,int> arr;

        for(int i = 0; i < s.length(); i++)
        {
            arr[s[i]]++;
            arr[t[i]]--;
        }

        for(auto x : arr)
        {
            if(x.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};