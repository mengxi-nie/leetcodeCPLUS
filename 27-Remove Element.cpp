class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int repeat = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val) repeat++;
            else nums[i - repeat] = nums[i];             
        }

        return nums.size() - repeat;
    }
};
