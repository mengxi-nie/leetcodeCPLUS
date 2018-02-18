class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = 0;
        if(nums.size() == 0) return res;
        sort(nums.begin(), nums.end());
        res = close_res(nums, target);
        return res;
    }
    
    int close_res(vector<int>& nums, int target)
    {
        int res = 9999999999;
        int sum = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1;
            int right = nums.size() - 1;
            //int curr_tar = target - nums[i];
            //int curr_sum = nums[left] + nums[right];
            while(left < right) {
                int curr_sum = nums[left] + nums[right] + nums[i];
                int temp = abs(target - curr_sum);
                if(temp < res) 
                {
                    res = temp;
                    sum = curr_sum;                                     
                }
                if(curr_sum < target) left++;
                else right--;                                
            }
        }
        return sum;
    }
};
