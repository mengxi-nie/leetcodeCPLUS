class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 0) {
           digits.insert(digits.begin(), 1);
           return digits;
        }
        int m = digits.size();
        for(int i = m - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i] = 0;
                if(i == 0) 
                {
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
            }
        }        
    }
};
