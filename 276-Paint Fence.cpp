class Solution {
public:
    int numWays(int n, int k) {
        if(n == 0) return 0;
        if(n == 1) return k;
        int way[n+1] = {0};
        way[0] = 0;
        way[1] = k;
        way[2] = k * k;
        for(int i = 3; i < n+1; i++) 
            way[i] = (k-1) * (way[i-1] + way[i-2]);
        return way[n];
    }
};

======================OR==================================

class Solution {
public:
    int numWays(int n, int k) {
        if(n == 0) return 0;
        if(n == 1) return k;
        int way[n] = {0};
        way[0] = k;
        way[1] = k * k;
        for(int i = 2; i < n; i++) 
            way[i] = (k-1) * (way[i-1] + way[i-2]);
        return way[n-1];
    }
};
