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

            if(arr[s[i]] == 0)
            {
                arr.erase(s[i]);
            }
            
            if(arr.find(t[i]) != arr.end() && arr[t[i]] == 0)
            {
                arr.erase(t[i]);
            }
        }

        return arr.empty();
    }
};