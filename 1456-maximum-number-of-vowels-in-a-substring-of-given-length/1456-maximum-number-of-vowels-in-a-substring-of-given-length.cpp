class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = k - 1;
        int count = 0;

        while(left <= right)
        {
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u')
            {
                count++;
            }
            left++;
        }

        left = 1;
        right++;

        int maxx = count;

        while(right < s.size())
        {
            if(s[left-1]=='a'||s[left-1]=='e'||s[left-1]=='i'||s[left-1]=='o'||s[left-1]=='u')
            {
                count--;
            }

            if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u')
            {
                count++;
            }

            maxx = max(maxx, count);

            right++;
            left++;
        }

        return maxx;
    }
};