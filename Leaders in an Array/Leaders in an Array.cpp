class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int i = nums.size()-2;
      int max=nums[nums.size()-1];
      vector <int> a;
      while(i>=0)
      {
        if(nums[i]>max)
        {
            max=nums[i];
            insert(a,nums[i])
        }
        i--;
      }

      return a;
    }
};
