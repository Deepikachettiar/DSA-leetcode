#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int x : nums) freq[x]++;
    
    vector<vector<int>> result;
    for (auto& [val, cnt] : freq)
        result.push_back({val, cnt});
    
    return result;
}