class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3)  return res;
        sort(nums.begin(), nums.end());
        res = helper(res, nums, 0);
        return res;
    }    
    vector<vector<int>> helper(vector<vector<int>>& result, vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 2; i++) {           
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1;
            int right = nums.size() - 1;
            int temp_target = target - nums[i];
            while (left < right) {
                if (nums[left] + nums[right] == temp_target) {
                    vector<int> sol;
                    sol.push_back(nums[i]);
                    sol.push_back(nums[left]);
                    sol.push_back(nums[right]);
                    result.push_back(sol);
                    left++;
                    right--;
                    while (nums[left] == nums[left-1]) left++;
                    while (nums[right] == nums[right+1]) right--;
                }
                else if (nums[left] + nums[right] > temp_target) right--;
                else left++;
            }
        }
        return result;
    }
};
