class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        if(nums.size() == 0) return result;
        sort(nums.begin(), nums.end());
        helper(result, temp, nums, used, 0, 0);
        return result;
    }    
    void helper(vector<vector<int>>& result, vector<int>& temp, vector<int>& nums, vector<bool>& used, int sum, int start)
    {
        if(sum == 0 && temp.size() == 3)
        {
            result.push_back(temp);
            return;
        }
        for(int i = start; i < nums.size(); i++) {
            if (i > start && nums[i-1] == nums[i] && used[i-1]== false) continue;
            if (used[i] == false ) {
                used[i] = true;
                temp.push_back(nums[i]);
                helper(result, temp, nums, used, sum - nums[i], i);
                used[i] = false;
                temp.pop_back();
            }
        }
    }
};
