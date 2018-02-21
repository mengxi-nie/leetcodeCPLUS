class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(i < nums.size()) {
            while(nums[i] == 0 && i < nums.size()) i++;
            nums[j] = nums[i];
            j++;
            i++;            
        }
        while(j < nums.size()) {
            nums[j] = 0;
            j++;
        }
        vector<int>::iterator myiter;
        for(myiter = nums.begin(); myiter != nums.end(); myiter++)
            cout << *myiter;
    }
};
