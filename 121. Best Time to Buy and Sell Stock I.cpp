class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int res = 0;
        int min_price = prices[0];
        for(int sell = 1; sell < prices.size(); sell++) {
            if(prices[sell] < min_price) min_price = prices[sell];          
            else res = max(res, prices[sell] - min_price);
        }
        return res;
    }
};
