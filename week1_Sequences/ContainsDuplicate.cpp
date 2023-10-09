# my solution
class Solution {
  public:
    bool containsDuplicate(vector<int>& nums) {
      int n = nums.size();
      for (int i = 0; i < n -1; i++) {
        for (int j = i + 1; j < n; j++) {
          if (nums[i] == nums[j]) {
            return true;
          }
        }
      }
        return false;
    }
}

# use set
class Solution {
  public: 
    bool containsDuplicate(vector<int>& nums) {
      return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
}

# use map
class Solution {
  public:
    bool containsDuplicate(vector<int>& nums) {
      map<int, int> m;
      for (auto i : nums) m[i]++;
      bool flag = false;
      for (auto i : m) {
        if (i.second > 1) {
          flag = true;
          break;
        }
      }
      return flag;
};
