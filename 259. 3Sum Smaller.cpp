class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int count = 0;
        if(nums.size() < 3) return count;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right) {
                int curr_sum = nums[left] + nums[right] + nums[i];
                if(curr_sum < target) 
                {
                    count += right - left; 
                    left++;
                }
                else right--;                                
            }
        }
        return count;
    }
};
