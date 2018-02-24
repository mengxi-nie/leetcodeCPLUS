class Solution {
public:
    int climbStairs(int n) {
        int res = 0;
        int climb[n+1] = {0};
        climb[0] = 1;
        climb[1] = 1;
        for(int i = 2; i < n + 1; i++) {
            int type_1 = climb[i-1];
            int type_2 = climb[i-2] ;
            climb[i] = type_1 + type_2;
         }
        return climb[n];
    }
};
