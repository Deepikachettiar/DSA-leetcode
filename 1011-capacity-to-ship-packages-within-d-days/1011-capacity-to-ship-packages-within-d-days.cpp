class Solution {
public:
    int shipWithinDays(vector<int>& weights, int k) {

        int n=  weights.size();
        
        
        int  start=0, end=0, mid, ans;

         for(int i=0; i<n; i++)
         {
             start=max(start, weights[i]);
             end+= weights[i];
         }
         
          while(start<=end)
          {
              mid = start + (end-start)/2;
              
              int  package=0, days=1;
              for(int i=0;i<n;i++)
              {
                   package+= weights[i];
                  if( package>mid)
                  {
                      days++;
                       package=weights[i];
                  }
              }
              
              if(days<=k)
              {
                  ans=mid;
                  end=mid-1;
              }
              else
              start=mid+1;
          }
          
          return ans;
        
        
    }
};