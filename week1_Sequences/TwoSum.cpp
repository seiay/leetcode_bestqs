class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> ans(2);
        for (int i = 0; i < length - 1 ; ++i)
        {
            for (int j = i + 1; j < length; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return ans;
    }
};
