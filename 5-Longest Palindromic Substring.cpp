class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;
        int maxLen = 0, start = 0, end = 0;
        int n = s.size();
        bool isPal[1000][1000] = {false};
        
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (s[i] == s[j] && i == (j + 1) )  isPal[j][i] = true;
                if (s[i] == s[j] && isPal[j+1][i-1] && i > (j + 1) ) isPal[j][i] = true;
                if (isPal[j][i] && maxLen < (i - j + 1)) {
                    maxLen = i - j + 1;
                    start = j;
                    end = i;                    
                }                
            }
            isPal[i][i] = true;
        }
        return s.substr(start, end - start + 1); 
    }
};
