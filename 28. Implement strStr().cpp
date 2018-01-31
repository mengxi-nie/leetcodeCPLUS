class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        int i = 0;
        int j = 0;
        
        if(needle == "") index = 0;
        else {
             while (i < haystack.size() && j < needle.size())
            {
                 if (haystack[i] == needle[j]) 
                 {                
                     if (j != needle.size() -1) j++;
                     else {
                         index = i - needle.size() + 1;
                         j = 0;  
                         return index;
                     }
                     i++;
                 } 
                 else 
                 {   i = i - j + 1;
                     j = 0;
                 }
            }
        }       
        return index;
    }
};
