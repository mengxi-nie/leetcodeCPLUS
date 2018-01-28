class Solution {
public:
	int myAtoi(string str) {
	    long res = 0;
		int sign = 1;  
        
        size_t find = str.find_first_not_of(' ');
    
        for(int i = find; i < str.size(); i++) {
            int j = 0;
            j = i + 1;
            if ( ((str[i] == '-') || (str[i] == '+')) && (isdigit(str[j])))
                sign = (str[i] == '+') ? 1 : -1;
            if ( ((str[i] == '-') || (str[i] == '+')) && (!isdigit(str[j])))
                return 0;
            if (isdigit(str[i])) {
                res = res * 10 + str[i] - '0';
                if (res > INT_MAX)
                    break;
            }
            if ((!isdigit(str[i])) && (str[i] != '-') && (str[i] != '+'))
                i = str.size() - 1;
        }
		res *= sign;
		if (res > INT_MAX) res = INT_MAX;
		else if (res < INT_MIN) res = INT_MIN;
		return res;
	}
};
