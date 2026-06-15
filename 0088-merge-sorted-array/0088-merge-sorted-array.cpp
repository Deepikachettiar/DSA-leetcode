//this si done in  the way of merge sort but in reverse order... here why merge sort way is not used is because nums1 already containss m+n values and then if we try to go from 0 then there will be a empty vector error

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;

        while(j>=0)
        {
            if(i>=0 && nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }

            else
            {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }

    }
};