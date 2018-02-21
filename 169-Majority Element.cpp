class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = 0;
        int medium = floor(nums.size() / 2);
        sort(nums.begin(), nums.end());
        result = nums.at(medium);
        return result;        
    }
};
