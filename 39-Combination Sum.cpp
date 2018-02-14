class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        if(candidates.empty()) return result;
        sort(candidates.begin(),candidates.end());
        helper(result, temp, candidates, target, 0);
        return result;        
    }
    void helper(vector<vector<int>>& combAll, vector<int>& comb, vector<int>& candidates, int target,int starter) {
        if (target == 0) 
        {
            combAll.push_back(comb);
            return;
        }
        if (target > 0) {
            for(int i = starter; i < candidates.size(); i++) {
                if(i>starter && candidates[i]==candidates[i-1]) continue;
                if(candidates[i] <= target)
                {
                    comb.push_back(candidates[i]);
                    helper(combAll, comb, candidates, target - candidates[i], i);
                    comb.pop_back();  
                }
           }
        }
    }
};
