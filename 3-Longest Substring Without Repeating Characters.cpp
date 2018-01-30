class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> asc_table(256, -1);
        int left = 0;
        int length = 0;   
        int temp = 0;
        asc_table[s[left]] = 0;
        
        if (s.length() == 1) length = 1;
        else 
        {
            for (int i = 1; i < s.length(); i++)
            {
                if (left <= asc_table[s[i]]) left = asc_table[s[i]] + 1;
                asc_table[s[i]] = i;
                temp = i - left + 1;
                length = (length > temp) ? length : temp;
            }         
        }
    return length;
    }
};