long long count = 0; 

class Solution {
public:

    void merge(vector<int> &nums, int start, int mid, int end) {
        int i = start;
        int j = mid + 1;

        vector<int> temp;

        while(i <= mid && j <= end) {
            if(nums[i] <= nums[j]) { 
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                ::count += (mid - i) + 1; 
                j++; 
            }
        }


        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }


        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }


        for (int k = start; k <= end; k++) {
            nums[k] = temp[k - start];
        }
    }

    void mergesort(vector<int> &nums, int start, int end) {
        if(start >= end) {
            return;
        }

        int mid = (start +end) /2;

        mergesort(nums, start, mid);       
        mergesort(nums, mid + 1, end);     
        merge(nums, start, mid, end);     
    }

    long long int numberOfInversions(vector<int>& nums) { 
        // CRITICAL Reset the global count to 0 for every new test case
        ::count = 0; 
        
        mergesort(nums, 0, nums.size() - 1);

        return ::count;
    }
};
