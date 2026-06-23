
class Solution {
public:
    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;
        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        while (i <= mid) temp.push_back(nums[i++]);
        while (j <= end) temp.push_back(nums[j++]);

        for (int k = start; k <= end; k++) {
            nums[k] = temp[k - start];
        }
    }

    int countPairs(vector<int>& nums, int start, int mid, int end) {
        int count = 0;
        int right = mid + 1;


        for (int i = start; i <= mid; i++) {
            // We use 2LL (Long Long) because multiplying by 2 can cause 
            // massive numbers to overflow standard integers
            while (right <= end && nums[i] > 2LL * nums[right]) {
                right++;
            }
            // Add the number of valid pairs we found for this specific left element
            count += (right - (mid + 1)); 
        }
        return count;
    }

    int mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return 0; // Base case

        int mid = start + (end - start) / 2;
        int count = 0;

        // 1. Sort and count the left half
        count += mergeSort(nums, start, mid);
        
        // 2. Sort and count the right half
        count += mergeSort(nums, mid + 1, end);
        
        // 3. Count the pairs BETWEEN the left and right halves
        count += countPairs(nums, start, mid, end);
        
        // 4. Merge them together
        merge(nums, start, mid, end);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};