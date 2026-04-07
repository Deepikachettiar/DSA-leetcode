class Solution {
public:
    void sortColors(vector<int>& nums) {
        nums = mergeSort(nums);
    }

    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return nums;

        int m = n / 2;
        vector<int> left(nums.begin(), nums.begin() + m);
        vector<int> right(nums.begin() + m, nums.end());

        left = mergeSort(left);
        right = mergeSort(right);

        return merge(left, right);
    }

    vector<int> merge(vector<int>& left, vector<int>& right) {
        vector<int> res;
        int i = 0, j = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                res.push_back(left[i]);
                i++;
            } else {
                res.push_back(right[j]);
                j++;
            }
        }

        while (i < left.size()) {
            res.push_back(left[i]);
            i++;
        }

        while (j < right.size()) {
            res.push_back(right[j]);
            j++;
        }

        return res;
    }
};