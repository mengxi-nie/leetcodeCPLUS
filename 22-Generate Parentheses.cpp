class Solution {
public:
    void findParenthesis(int n, int left, int right, string &combo, vector<string> &allcombo)
    {
        if (left == n && right == n)
        {
            allcombo.push_back(combo);
            return;
        }
        if (left < n)
        {
            combo.push_back('(');
            findParenthesis(n, left+1, right, combo, allcombo);
            combo.pop_back();
        }
        if (right < left)
        {
            combo.push_back(')');
            findParenthesis(n, left, right+1, combo, allcombo);
            combo.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp;
        findParenthesis(n, 0, 0, temp, result);
        return result;
    }
};
