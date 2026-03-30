class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
     set<int> s;
     int i=0;
     int j=0;
     while( i<nums1.size() && j<nums2.size() )   
     {
        if(nums1[i]<nums2[j])
        {
            s.insert(nums1[i]);
            i++;
        }

        else
        {
            s.insert(nums2[j]);
            j++;
        }
     }
     while(i<nums1.size())
     {
        s.insert(nums1[i]);
        i++;
     }

     while(j<nums2.size())
     {
        s.insert(nums2[j]);
        j++;
     }

     vector<int> res(s.begin(),s.end());
     return res;
    }
};