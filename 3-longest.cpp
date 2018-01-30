class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> asc_table(256, 0);
        int left = 0;
        int length = 0;
        
        asc_table[s[left]] = 1;
        for (int i = 1; i < s.size(); i ++)
        {
            if (asc_table[s[i]] == 0 && s[i] != s[left])
            {
                asc_table[s[i]] = 1;
                temp = i - left + 1;
                length = (length > temp) ? length : temp;
            }
            else 
            {
                length = temp;
                temp = 0;
                left ++;
            }
        }
        return length;
};
