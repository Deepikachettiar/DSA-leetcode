class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        deque<int> arr;

        for(int right = 0; right < nums.size(); right++)
        {
            while(!arr.empty() && arr.front() <= right - k)
            {
                arr.pop_front();
            }

            while(!arr.empty() && nums[arr.back()] <= nums[right])
            {
                arr.pop_back();
            }

            arr.push_back(right);

            if(right >= k - 1)
            {
                ans.push_back(nums[arr.front()]);
            }
        }

        return ans;
    }
};