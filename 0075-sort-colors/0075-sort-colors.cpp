//optimal using Dutch National Flag algo 
//complexity is O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
       int mid=0;
       int high=nums.size()-1;

       while(mid<=high)
       {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }

        else if(nums[mid]==1)
        {
            mid++;
        }

        else if(nums[mid]==1)
        {
            swap(nums[mid],nums[high]);
            high--;
        }

       }
    }
};

//this is done using merge sort as it is a stable sorting algo
/*
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
*/