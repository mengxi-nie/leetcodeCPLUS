class Solution {
public:
    bool isLeft (char l) {
        return (l == '(' || l == '{' || l == '[');
    }
    
    bool isClose(char l, char r) {
        if (l == '(' ) return r == ')';
        if (l == '{' ) return r == '}';
        if (l == '[' ) return r == ']';
        return false;
    }
    
    bool isValid(string s) {
        stack<char> mystack;
        for(int i = 0; i < s.size(); i++)
        {
            if (isLeft(s[i])) mystack.push(s[i]);
            else {
                if (mystack.empty() || !isClose(mystack.top(), s[i])) return false;
                mystack.pop();
            }
        }
        return mystack.empty();
    }
};
