class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int i = nums.size()-2;
      int max=nums[nums.size()-1];
      vector <int> a;
      a.push_back(nums[nums.size()-1]);
      while(i>=0)
      {
        if(nums[i]>max)
        {
            max=nums[i];
            a.push_back(nums[i]);
        }
        i--;
      }
      reverse(a.begin(),a.end());

      return a;
    }
};
