#include<climits>

class Solution {
public:
    bool isPalindrome(int x) {
        int initial=x;
        int res=0;

        if(x<0)
            return false;

        while(x!=0)
        {
            int n=x%10;
            
            if(res < INT_MIN/10 || res > INT_MAX/10)
            {
                return false;
            }
            

            res=res*10+n;
            x=x/10;
        }

       return (res==initial);
    }
};