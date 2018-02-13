class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector< vector<int> > result;
        vector<int> temp;
        vector<bool> used_item(nums.size(), false);
        findComb(nums, result, temp, used_item);
        return result;
    }
        
    void findComb(vector<int>& nums, vector<vector<int>>& all_Comb, vector<int>& comb, vector<bool>& used) {       
        if (comb.size() == nums.size())
        {
            all_Comb.push_back(comb);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if(used[i] == true) continue;
            used[i] = true;
            comb.push_back(nums.at(i));
            findComb(nums, all_Comb, comb, used);
            used[i] = false;
            comb.pop_back();
        }
        
    }    
};
