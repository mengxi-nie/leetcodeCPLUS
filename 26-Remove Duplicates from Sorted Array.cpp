class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int repeat = 0;
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1]) repeat++;
            else nums[i - repeat] = nums[i];              
        }
        return nums.size() - repeat;
    }
};