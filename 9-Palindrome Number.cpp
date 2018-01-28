class Solution {
public:
    bool isPalindrome(int x) {
        bool result = false;
        int length = 0;
        int i = 0;
        int j = 0;
        
        stringstream ss;
        ss << x;
        string str = ss.str();             
        if (str.size() % 2 == 0) 
        {
            length = str.size();
            j = length - 1;
        }
        if (str.size() % 2 == 1) 
        {
            length = str.size() - 1;
            j = length;
        }
        if (str.size() == 1) result = true;
        while ( (j >= length / 2) && (i < length / 2) && (str[0] != '-') )
        {
            if(str[i] == str[j]) {
                --j;
                ++i;
                result = true;
            }
            else 
            {
                result = false;
                break;
            }
        }
        return result;     
        }    
};
