class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size())
            return "";

        unordered_map<char,int> arr;
        unordered_map<char,int> check;

        for(int i = 0; i < t.size(); i++)
            arr[t[i]]++;

        int left = 0;
        int right = 0;

        int count = 0;
        int minLen = INT_MAX;
        int start = 0;

        while(right < s.size())
        {
            if(arr.find(s[right]) != arr.end())
            {
                check[s[right]]++;

                if(check[s[right]] <= arr[s[right]])
                    count++;
            }

            while(count == t.size())
            {
                if(right - left + 1 < minLen)
                {
                    minLen = right - left + 1;
                    start = left;
                }

                if(arr.find(s[left]) != arr.end())
                {
                    check[s[left]]--;

                    if(check[s[left]] < arr[s[left]])
                        count--;
                }

                left++;
            }

            right++;
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};