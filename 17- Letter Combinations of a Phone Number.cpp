class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> lettComb;
        string dict[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string comb(digits.size(),'\0');
        if(digits.size() == 0) ;
        else findLettComb(digits, 0, dict, comb, lettComb);
        return lettComb;
    }
    
    void findLettComb(string &digits, int index, string dict[], string &comb, vector<string> &lettComb) {
        if(index==digits.size()) {
            lettComb.push_back(comb);
            return;
        }        
        string lett= dict[digits[index] - '0'];
        for(int i=0; i<lett.size(); i++) {
            comb[index] = lett[i];
            findLettComb(digits, index+1, dict, comb, lettComb);
        }
    }
};
