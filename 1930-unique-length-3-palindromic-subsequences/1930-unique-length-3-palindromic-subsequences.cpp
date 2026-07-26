class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int left=0;
        int right=s.size()-1;
        vector<int> a(26,-1);
        vector<int>visited(26,0);
        int count=0;

        for(int k=0;k<s.size();k++)
        {
            a[s[k]-'a']=k;
        }
        while(left<s.size())
        {
            if(visited[s[left]-'a'])
            {
                left++;
                continue;
            }
            visited[s[left]-'a']=1;
            vector<int> arr(26,0);
            int right=a[s[left]-'a'];

            if(right<=left)
            {
                left++;
                continue;
            }

            for(int i=left+1;i<right;i++)
            {
                if(!arr[s[i]-'a'])
                    count++;
                    
                arr[s[i]-'a']=1;
            }

            while(visited[s[left]-'a']==1 && left<right)
                ++left;
        }

        return count;

    }
};