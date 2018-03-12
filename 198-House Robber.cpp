class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size() + 1;
        int money[n] = {0};
        if(n == 1) return 0;
        if(n == 2) return nums[0];
        if(n == 3) return max(nums[0], nums[1]);
        money[0] = 0;
        money[1] = nums[0];
        for(int i = 2; i < n; i++)
            money[i] = max (nums[i-1] + money[i-2], money[i-1]);
        return money[n-1];
        
    }
};
