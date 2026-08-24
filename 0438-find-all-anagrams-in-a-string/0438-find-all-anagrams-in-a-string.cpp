class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr;
        if(s.size()<p.size())
        {
            return arr;
        }
        int left=0;
        int right=p.size()-1;
        unordered_map<char,int> map;
        for(int i=0;i<p.size();i++)
        {
            map[p[i]]++;
        }

        for(int i=0;i<=s.size()-p.size();i++)
        {
            unordered_map<char,int> check;
            int k=i;
            while(k<=right)
            {
                check[s[k]]++;
                k++;
            }
            if(check==map)
            {
                arr.push_back(i);
            }
            right +=1;

        }

        return arr;
    }
};